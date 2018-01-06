use std::ffi::CStr;
use std::os::raw::{c_uint, c_char};

#[no_mangle]
pub unsafe extern "C" fn byte2str(name: *const c_char) {
    let n = CStr::from_ptr(name);
	println!("Hello, {}", n.to_str().unwrap());
}

#[no_mangle]
pub unsafe extern "C" fn add(a: c_uint, b: c_uint) -> c_uint {
    return a + b
}
