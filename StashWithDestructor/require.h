#pragma once
#include <cstdio>
#include <cstdlib>
#include <fstream>

inline void require(bool requirement,
    const char* msg = "Requirement failed") {
    using namespace std;
    if (!requirement) {
        fprintf(stderr, "%s", msg);
        exit(1);
    }
}

inline void requireArgs(int argc, int args,
    const char* msg = "Must use %d arguments") {
    using namespace std;
    if (argc != args + 1) {
        fprintf(stderr, msg, args);
        exit(1);
    }
}

inline void requireMinArgs(int argc, int minArgs,
    const char* msg =
    "Must use at least %d arguments") {
    using namespace std;
    if (argc < minArgs + 1) {
        fprintf(stderr, msg, minArgs);
        exit(1);
    }
}

inline void assure(std::ifstream& in,
    const char* filename = "") {
    using namespace std;
    if (!in) {
        fprintf(stderr,
            "Could not open file %s", filename);
        exit(1);
    }
}

inline void assure(std::ofstream& in,
    const char* filename = "") {
    using namespace std;
    if (!in) {
        fprintf(stderr,
            "Could not open file %s", filename);
        exit(1);
    }
}