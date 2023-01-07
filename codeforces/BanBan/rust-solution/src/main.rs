fn readi64(input : &mut dyn Iterator<Item = String>) -> i64 {
    input.next().unwrap().parse::<i64>().unwrap()
}



fn main() {
    let mut lines = std::io::stdin().lines().map(|line| line.unwrap());
    let tt = readi64(&mut lines);
    for _ in 0..tt {
        let n = readi64(&mut lines);
        if n == 1 {
            println!("{n}\n1 2\n");
        } else {
            println!("{}", n - 1);
            let mut v = Vec::with_capacity(n as usize);
            let mut cnt = 0;
            let mut i = 0;
            while cnt != n - 1 && i < n {
                if (3 * n - 1 - i) % 3 != 0 {
                    v[i as usize] = 3 * n - 1 - i;
                    cnt +=1;
                }
                i += 1;
            }
            for x in &v {
                println!("{} {}", i * 3 + 1, x);
            }
        }
    }
}
