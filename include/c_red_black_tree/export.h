#ifndef EXPORT_H
#define EXPORT_H

#ifdef __cplusplus
extern "C" {
#endif // #ifdef __cplusplus

#ifndef C_RED_BLACK_TREE_STATIC_DEFINE
#  include <c_red_black_tree/export_shared.h>
#else
#  include <c_red_black_tree/export_static.h>
#endif // #ifndef C_RED_BLACK_TREE_STATIC_DEFINE

#ifdef __cplusplus
}
#endif // #ifdef __cplusplus

#endif // #ifndef EXPORT_H

