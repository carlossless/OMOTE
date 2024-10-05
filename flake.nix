{
  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-24.05";
    utils.url = "github:numtide/flake-utils";
  };

  outputs = { self, nixpkgs, utils }:
    utils.lib.eachDefaultSystem (system:
      let
        pkgs = nixpkgs.legacyPackages.${system};
      in {
        devShell = pkgs.mkShell {
          buildInputs = with pkgs; [ 
            platformio 
            SDL2 
            SDL2_image 
            SDL2_ttf
          ];
          shellHook = ''
            export PLATFORMIO_CORE_DIR=$PWD/.platformio
          '';
        };
      }
    );
}
