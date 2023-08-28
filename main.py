import ctypes

lib = ctypes.CDLL("handlers/lib.dll")

string = ctypes.create_string_buffer(b"gachi-muchi")
lib.open_website(string)