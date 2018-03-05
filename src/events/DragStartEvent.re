type t = {.
    "dataTransfer": DataTransfer.t
};
external unsafeCast : _ => t = "%identity";
