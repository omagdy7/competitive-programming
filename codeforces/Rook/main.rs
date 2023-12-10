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

fn solve() {
    let pos = read::<String>();
    let bytes = pos.as_bytes();
    let (x, y) = (bytes[0], bytes[1]);
    for i in 0..8 {
        let out = format!("{}{}", (i + 'a' as u8) as char, y as char);
        if (out == pos.to_string()) {
            continue;
        }
        println!("{}", format!("{}{}", (i + 'a' as u8) as char, y as char));
    }
    for j in 0..8 {
        let out = format!("{}{}", x as char, (j + 1 + '0' as u8) as char);
        if (out == pos.to_string()) {
            continue;
        }
        println!(
            "{}",
            format!("{}{}", x as char, (j + 1 + '0' as u8) as char)
        );
    }
}

fn main() {
    let mut tt = read::<u64>();
    while tt > 0 {
        solve();
        tt -= 1;
    }
}
