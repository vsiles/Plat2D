#ifndef ERRORS_H_INCLUDED
#define ERRORS_H_INCLUDED

#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>

/* Log a SDL error */
static inline void logSDLError(const std::string &msg,
                               std::ostream &os = std::cerr)
{
    os << "[SDL ] " << msg << " error: " << SDL_GetError() << std::endl;
}

/* Log a SDL_image error */
static inline void logIMGError(const std::string &msg,
                               std::ostream &os = std::cerr)
{
    os << "[IMG ] " << msg << " error: " << IMG_GetError() << std::endl;
}

/* Log a SDL_ttf error */
static inline void logTTFError(const std::string &msg,
                               std::ostream &os = std::cerr)
{
    os << "[TTF ] " << msg << " error: " << TTF_GetError() << std::endl;
}

/* Log a normal message */
static inline void log(const std::string &msg, std::ostream &os = std::cout)
{
    os << "[    ] " << msg << std::endl;
}

/* Log a raw error */
static inline void logError(const char *code, const std::string &msg,
                            std::ostream &os = std::cerr)
{
    os << "[";
    os.write(code, 4);
    os << "] " << msg << std::endl;
}

#endif /* ERRORS_H_INCLUDED */
