use std::ffi::CString;
use std::os::raw::c_char;

/// Returns a GPS coordinate string (example data)
#[unsafe(no_mangle)]
pub extern "C" fn get_gps_coordinates() -> *const c_char {
    let coordinates = "42.6975,23.3242"; // Example GPS coordinates (Sofia, Bulgaria)

    // Create a CString to return a C-compatible string
    let c_str = CString::new(coordinates).expect("CString conversion failed");

    // Return a pointer to the string, ensuring Rust does not free it
    c_str.into_raw()
}