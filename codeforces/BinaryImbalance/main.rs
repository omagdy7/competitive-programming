#[allow(dead_code)]
fn read<T: std::str::FromStr>() -> T {
    let mut s = String::new();
    std::io::stdin().read_line(&mut s).ok();
    s.trim().parse().ok().unwrap()
}

#[allow(dead_code)]
fn read_vec<T: std::str::FromStr>() -> Vec<T> {
    read::<String>()
        .split_whitespace()
        .map(|e| e.parse().ok().unwrap())
        .collect()
}

#[allow(dead_code)]
fn read_mat<T: std::str::FromStr>(n: u32) -> Vec<Vec<T>> {
    (0..n).map(|_| read_vec()).collect()
}

fn main() {
    let mut tt = read::<u64>();
    while tt > 0 {
        let _ = read::<u64>();
        let s = read::<String>();

        let ones = s.chars().filter(|&ch| ch == '1').count();
        let zrs = s.chars().filter(|&ch| ch == '0').count();

        if zrs > ones {
            println!("YES");
        } else {
            if s.contains("01") || s.contains("10") {
                println!("YES");
            } else {
                println!("NO")
            }
        }
        tt -= 1;
    }
}
