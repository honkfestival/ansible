#pragma once

void set_mode_tt(void);


void clock_tt(uint8_t phase);
void ii_tt(uint8_t *d, uint8_t l);

void handler_TTKey(s32 data);
void handler_TTTr(s32 data);
void handler_TTTrNormal(s32 data);