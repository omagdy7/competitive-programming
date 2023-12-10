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
    let inp = read::<String>();
    let s = inp.as_bytes();
    let mut marks = vec![true; s.len()];
    let mut rmost_l = vec![s.iter().position(|&x| x.is_ascii_lowercase()).unwrap_or(0)];
    let mut rmost_h = vec![s.iter().position(|&x| x.is_ascii_uppercase()).unwrap_or(0)];
    for (i, &c) in s.iter().enumerate() {
        match c as char {
            'b' => {
                marks[i] = false;
                marks[rmost_l.pop().unwrap_or(i)] = false;
            }
            'B' => {
                marks[i] = false;
                marks[rmost_h.pop().unwrap_or(i)] = false;
            }
            _ => {}
        };
        if c.is_ascii_uppercase() && c != 'B' as u8 {
            rmost_h.push(i);
        } else if c.is_ascii_lowercase() && c != 'b' as u8 {
            rmost_l.push(i);
        }
    }
    let ans = s
        .iter()
        .zip(marks.iter())
        .filter_map(|(&x, include)| include.then_some(x as char))
        .collect::<String>();
    println!("{}", ans)
}

fn main() {
    let mut tt = read::<u64>();
    while tt > 0 {
        solve();
        tt -= 1;
    }
}
