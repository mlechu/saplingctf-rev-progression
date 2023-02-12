#define FONT_CHARS '~'

// 6 rows of 4 bits each
// top byte unused
int char_start = 2;
int char_end = 8;
int char_width = 4;
int char_height = 6;
int char_render_size = 4 * 6;
int font_chars = '~'; // hint

int bitmap_font[FONT_CHARS] = {
    0x00000000, // 0x00
    0x00000000, // 0x01
    0x00000000, // 0x02
    0x00000000, // 0x03
    0x00000000, // 0x04
    0x00000000, // 0x05
    0x00000000, // 0x06
    0x00000000, // 0x07
    0x00000000, // 0x08
    0x00000000, // 0x09
    0x00000000, // 0x0A
    0x00000000, // 0x0B
    0x00000000, // 0x0C
    0x00000000, // 0x0D
    0x00000000, // 0x0E
    0x00000000, // 0x0F
    0x00000000, // 0x10
    0x00000000, // 0x11
    0x00000000, // 0x12
    0x00000000, // 0x13
    0x00000000, // 0x14
    0x00000000, // 0x15
    0x00000000, // 0x16
    0x00000000, // 0x17
    0x00000000, // 0x18
    0x00000000, // 0x19
    0x00000000, // 0x1A
    0x00000000, // 0x1B
    0x00000000, // 0x1C
    0x00000000, // 0x1D
    0x00000000, // 0x1E
    0x00000000, // 0x1F
    0x00000000, // 0x20
    0x00222020, // 0x21
    0x00550000, // 0x22
    0x00575750, // 0x23
    0x00236362, // 0x24
    0x00412410, // 0x25
    0x00253570, // 0x26
    0x00640000, // 0x27
    0x00244420, // 0x28
    0x00422240, // 0x29
    0x00527250, // 0x2A
    0x00027200, // 0x2B
    0x00000064, // 0x2C
    0x00007000, // 0x2D
    0x00000020, // 0x2E
    0x00112440, // 0x2F
    0x00355560, // 0x30
    0x00262270, // 0x31
    0x00612470, // 0x32
    0x00612160, // 0x33
    0x00157110, // 0x34
    0x00746160, // 0x35
    0x00246520, // 0x36
    0x00713220, // 0x37
    0x00252520, // 0x38
    0x00253120, // 0x39
    0x00002020, // 0x3A
    0x00002064, // 0x3B
    0x00124210, // 0x3C
    0x00007070, // 0x3D
    0x00421240, // 0x3E
    0x00612020, // 0x3F
    0x00755470, // 0x40
    0x00257550, // 0x41 = A
    0x00656560, // 0x42
    0x00344430, // 0x43
    0x00655560, // 0x44
    0x00746470, // 0x45
    0x00746440, // 0x46
    0x00345530, // 0x47
    0x00557550, // 0x48
    0x00722270, // 0x49
    0x00111520, // 0x4A
    0x00556550, // 0x4B
    0x00444470, // 0x4C
    0x00577550, // 0x4D
    0x00655550, // 0x4E
    0x00255520, // 0x4F
    0x00656440, // 0x50
    0x00255730, // 0x51
    0x00656550, // 0x52
    0x00347160, // 0x53
    0x00722220, // 0x54
    0x00555570, // 0x55
    0x00555520, // 0x56
    0x00557750, // 0x57
    0x00552550, // 0x58
    0x00552220, // 0x59
    0x00712470, // 0x5A
    0x00644460, // 0x5B = [
    0x00442110, // 0x5C
    0x00622260, // 0x5D
    0x00250000, // 0x5E
    0x0000000f, // 0x5F
    0x00620000, // 0x60
    0x00003570, // 0x61
    0x00446560, // 0x62
    0x00003430, // 0x63
    0x00113530, // 0x64
    0x00007630, // 0x65
    0x00127220, // 0x66
    0x00007517, // 0x67
    0x00446550, // 0x68
    0x00202220, // 0x69
    0x00202226, // 0x6A
    0x00445650, // 0x6B
    0x00222220, // 0x6C
    0x00007750, // 0x6D
    0x00006550, // 0x6E
    0x00002520, // 0x6F
    0x00006564, // 0x70
    0x00003531, // 0x71
    0x00006440, // 0x72
    0x00003260, // 0x73
    0x00027230, // 0x74
    0x00005570, // 0x75
    0x00005520, // 0x76
    0x00005770, // 0x77
    0x00005250, // 0x78
    0x00005524, // 0x79
    0x00006230, // 0x7A
    0x00326230, // 0x7B
    0x00222222, // 0x7C
    0x00623260 // 0x7D = ~
};


/* 0b0001 1 */
/* 0b0010 2 */
/* 0b0011 3 */
/* 0b0100 4 */
/* 0b0101 5 */
/* 0b0110 6 */
/* 0b0111 7 */
/* 0b1000 8 */
/* 0b1010 a */
/* 0b1011 b */
/* 0b1100 c */
/* 0b1101 d */
/* 0b1110 e */
/* 0b1111 f */

/* 1 8 r */
/* 2 4 t */
/* 3 c u */
/* 5 a i */
/* 7 e o */
/* b d p */