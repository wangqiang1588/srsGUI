#ifndef _plot_real_h
#define _plot_real_h

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include "libsdrgui/common/config.h"

typedef void* plot_real_t;

LIBSDRGUI_API int plot_real_init(plot_real_t *h);
LIBSDRGUI_API void plot_real_setTitle(plot_real_t *h, char *title);
LIBSDRGUI_API void plot_real_setNewData(plot_real_t *h, float *data,
    int num_points);
LIBSDRGUI_API void plot_real_setXAxisAutoScale(plot_real_t *h, bool on);
LIBSDRGUI_API void plot_real_setYAxisAutoScale(plot_real_t *h, bool on);
LIBSDRGUI_API void plot_real_setXAxisScale(plot_real_t *h, double xMin, double xMax);
LIBSDRGUI_API void plot_real_setYAxisScale(plot_real_t *h, double yMin, double yMax);
LIBSDRGUI_API void plot_real_setXAxisRange(plot_real_t *h, double xMin, double xMax);
LIBSDRGUI_API void plot_real_setLabels(plot_real_t *h, char *xLabel, char *yLabel);
LIBSDRGUI_API void plot_real_addToWindow(plot_real_t *h, char *window);
LIBSDRGUI_API void plot_real_addToWindowGrid(plot_real_t *h, char *window, int row, int column);

#ifdef __cplusplus
}
#endif

#endif
