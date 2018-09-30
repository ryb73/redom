open ReDomSharedTypes;

[@bs.val] external document : Document.t = "";
[@bs.val] external window : window = "";
[@bs.val] external location : Location.t = "";

[@bs.val] external encodeUriComponent : string => string = "encodeURIComponent";
[@bs.val] external encodeUri : string => string = "encodeURI";
