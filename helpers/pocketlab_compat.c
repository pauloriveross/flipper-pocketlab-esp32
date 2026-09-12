#include <furi.h>
#include <gui/canvas.h>
#include <gui/elements.h>
#include <notification/notification.h>
#include <notification/notification_messages.h>
#include <notification/notification_messages_notes.h>

/* Compatibility definitions for Flipper Zero ESP32 Port.
 * These symbols are defined locally so the .fap does not depend on
 * the firmware exporting them, ensuring 100% compatibility across
 * all firmware versions and ESP32 dev boards.
 */

void canvas_set_custom_u8g2_font(Canvas* canvas, const uint8_t* font) {
    UNUSED(font);
    canvas_set_font(canvas, FontSecondary);
}

void elements_scrollbar(Canvas* canvas, size_t pos, size_t total) {
    furi_assert(canvas);
    elements_scrollbar_pos(canvas, 128, 0, 64, pos, total);
}

const NotificationMessage message_green_0 = {
    .type = NotificationMessageTypeLedGreen,
    .data.led.value = 0x00,
};

const NotificationMessage message_blue_0 = {
    .type = NotificationMessageTypeLedBlue,
    .data.led.value = 0x00,
};

const NotificationMessage message_delay_1 = {
    .type = NotificationMessageTypeDelay,
    .data.delay.length = 1,
};

const NotificationMessage message_delay_10 = {
    .type = NotificationMessageTypeDelay,
    .data.delay.length = 10,
};

const NotificationMessage message_delay_100 = {
    .type = NotificationMessageTypeDelay,
    .data.delay.length = 100,
};

const NotificationMessage message_note_a2 = {
    .type = NotificationMessageTypeSoundOn,
    .data.sound.frequency = 110.0f,
    .data.sound.volume = 1.0f,
};

const NotificationMessage message_note_a3 = {
    .type = NotificationMessageTypeSoundOn,
    .data.sound.frequency = 220.0f,
    .data.sound.volume = 1.0f,
};

const NotificationMessage message_note_a4 = {
    .type = NotificationMessageTypeSoundOn,
    .data.sound.frequency = 440.0f,
    .data.sound.volume = 1.0f,
};

const NotificationMessage message_note_a5 = {
    .type = NotificationMessageTypeSoundOn,
    .data.sound.frequency = 880.0f,
    .data.sound.volume = 1.0f,
};

const NotificationMessage message_note_c3 = {
    .type = NotificationMessageTypeSoundOn,
    .data.sound.frequency = 130.81f,
    .data.sound.volume = 1.0f,
};

const NotificationMessage message_note_c4 = {
    .type = NotificationMessageTypeSoundOn,
    .data.sound.frequency = 261.63f,
    .data.sound.volume = 1.0f,
};

const NotificationMessage message_note_c7 = {
    .type = NotificationMessageTypeSoundOn,
    .data.sound.frequency = 2093.0f,
    .data.sound.volume = 1.0f,
};

const NotificationMessage message_note_e5 = {
    .type = NotificationMessageTypeSoundOn,
    .data.sound.frequency = 659.25f,
    .data.sound.volume = 1.0f,
};

const NotificationMessage message_note_e6 = {
    .type = NotificationMessageTypeSoundOn,
    .data.sound.frequency = 1318.51f,
    .data.sound.volume = 1.0f,
};

const NotificationMessage message_note_g5 = {
    .type = NotificationMessageTypeSoundOn,
    .data.sound.frequency = 783.99f,
    .data.sound.volume = 1.0f,
};

const NotificationMessage message_note_g6 = {
    .type = NotificationMessageTypeSoundOn,
    .data.sound.frequency = 1567.98f,
    .data.sound.volume = 1.0f,
};
