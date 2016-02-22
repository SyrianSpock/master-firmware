#ifndef GPIO_TRACE_H
#define GPIO_TRACE_H

#ifdef __cplusplus
extern "C" {
#endif

void trace_toggle(unsigned int pin);
void trace_set(unsigned int pin);
void trace_clear(unsigned int pin);
void trace_set_map(unsigned int map, unsigned int mask);

#ifdef __cplusplus
}
#endif

#endif /* GPIO_TRACE_H */
