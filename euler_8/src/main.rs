fn main() {

    let triple: Vec<u32> = find_pythorgean_triple_sums_to( 1000 );
    let mut product: u32 = 1;
    for t in &triple {
        product *= *t;
        println!( "Triples:  {}", *t );
    }
    println!( "The product is {}", product );
}

fn  find_pythorgean_triple_sums_to(n:u32)-> Vec<u32> {
    for a in 2 .. n {
        if let Some( b ) = calculate_lower_triple(a, n) {
            return vec![a,b, integer_sqrt( a*a + b*b ) ];
        } 
    }
    vec![]
}

fn calculate_lower_triple(a:u32, n: u32) -> Option<u32> {
    
    let epsilon:f64 = 0.0001;
    
    let n :f64 = n as f64;
    let a: f64 = a as f64;
    
    let ans: f64 = n*( n - 2.0*a ) / ( 2.0*n - 2.0*a );

    if ( ans - ans.floor() ).abs( ) < epsilon {
        return Some( ans as u32 );
    }
    None
}

fn integer_sqrt(num: u32) -> u32 {
    ( ( num as f64).sqrt() ) as u32
}