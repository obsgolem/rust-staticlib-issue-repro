#[no_mangle]
pub unsafe extern "C" fn hw() {
    println!("Hello world");
    let v = vec![1, 2, 3, 4];
    println!("{}", v[2]);
}
