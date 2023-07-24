use std::io;
use std::str::FromStr;

#[allow(unused_variables)]
#[allow(dead_code)]

fn read_line() -> String {
    let mut buffer = String::new();
    io::stdin()
        .read_line(&mut buffer)
        .expect("failed to read line");

    buffer
}

#[allow(dead_code)]
fn read<T: FromStr>() -> Result<T, T::Err> {
    read_line().trim().parse::<T>()
}

#[allow(dead_code)]
fn read_vec<T: FromStr>() -> Result<Vec<T>, T::Err> {
    read_line()
        .split_whitespace()
        .map(|x| x.parse::<T>())
        .collect()
}

fn solve() {
    let v: Vec<i32> = read_vec().unwrap();
    let (_, mut t) = (v[0], v[1]);
    let a: Vec<i32> = read_vec().unwrap();
    let b: Vec<i32> = read_vec().unwrap();
    let mut mx = 0;
    let mut idx = -1;
    for i in 0..a.len() {
        if t >= a[i] && b[i] > mx {
            idx = i as i32 + 1;
            mx = b[i];
        }
        t -= 1;
    }
    println!("{idx}");
}

fn main() {
    let t = read::<i32>().unwrap();
    for _i in 0..t {
        solve();
    }
}
