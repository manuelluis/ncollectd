set(LIBXSON_SRC buf.h bytestack.h common.h
                      encode.c encode.h
                      json.c
                      lex.c lex.h
                      parser.c parser.h
                      tree.c tree.h
                      value.c value.h
                      json_parse.h
                      struct.c struct.h
                      render.c render.h
                      json_render.c json_render.h
                      yaml_render.c yaml_render.h)

add_library(libxson STATIC ${LIBXSON_SRC})
set_target_properties(libxson PROPERTIES PREFIX "")
set_target_properties(libxson PROPERTIES POSITION_INDEPENDENT_CODE ON)
