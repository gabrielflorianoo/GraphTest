let s:cpo_save=&cpo
set cpo&vim
cnoremap <silent> <C-R> <Cmd>lua require("which-key").show("\18", {mode = "c", auto = true})
inoremap <silent> <C-R> <Cmd>lua require("which-key").show("\18", {mode = "i", auto = true})
inoremap <C-K> <Up>
inoremap <C-J> <Down>
inoremap <C-L> <Right>
inoremap <C-H> <Left>
inoremap <C-B> ^i
cnoremap <silent> <Plug>(TelescopeFuzzyCommandSearch) e "lua require('telescope.builtin').command_history { default_text = [=[" . escape(getcmdline(), '"') . "]=] }"
inoremap <C-W> u
inoremap <C-U> u
nnoremap  <Cmd>%y+
nnoremap  h
nnoremap <NL> j
nnoremap  k
nnoremap  l
nnoremap  <Cmd>NvimTreeToggle
nnoremap  <Cmd>w
nnoremap <silent> Þ <Nop>
nnoremap <silent>  <Cmd>lua require("which-key").show("\23", {mode = "n", auto = true})
tnoremap  
nnoremap  <Cmd>noh
nnoremap  :bd!
xnoremap <silent>  Þ <Nop>
xnoremap <silent>   <Cmd>lua require("which-key").show(" ", {mode = "v", auto = true})
nnoremap <silent>  rÞ <Nop>
nnoremap <silent>  fÞ <Nop>
nnoremap <silent>  mÞ <Nop>
nnoremap <silent>  wÞ <Nop>
nnoremap <silent>  pÞ <Nop>
nnoremap <silent>  gÞ <Nop>
nnoremap <silent>  tÞ <Nop>
nnoremap <silent>  lÞ <Nop>
nnoremap <silent>  cÞ <Nop>
nnoremap <silent>  Þ <Nop>
nnoremap <silent>   <Cmd>lua require("which-key").show(" ", {mode = "n", auto = true})
nnoremap  wK <Cmd>WhichKey 
nnoremap  fa <Cmd>Telescope find_files follow=true no_ignore=true hidden=true
nnoremap  ff <Cmd>Telescope find_files
nnoremap  th <Cmd>Telescope themes
nnoremap  pt <Cmd>Telescope terms
nnoremap  gt <Cmd>Telescope git_status
nnoremap  cm <Cmd>Telescope git_commits
nnoremap  fz <Cmd>Telescope current_buffer_fuzzy_find
nnoremap  fo <Cmd>Telescope oldfiles
nnoremap  ma <Cmd>Telescope marks
nnoremap  fh <Cmd>Telescope help_tags
nnoremap  fb <Cmd>Telescope buffers
nnoremap  fw <Cmd>Telescope live_grep
nnoremap  e <Cmd>NvimTreeFocus
vnoremap  / <Cmd>lua require('Comment.api').toggle.linewise(vim.fn.visualmode())
nnoremap  b <Cmd>enew
nnoremap  ch <Cmd>NvCheatsheet
nnoremap  rn <Cmd>set rnu!
nnoremap  n <Cmd>set nu!
nnoremap <silent> !iÞ <Nop>
nnoremap <silent> !aÞ <Nop>
nnoremap <silent> !Þ <Nop>
nnoremap <silent> ! <Cmd>lua require("which-key").show("!", {mode = "n", auto = true})
xnoremap <silent> " <Cmd>lua require("which-key").show("\"", {mode = "v", auto = true})
nnoremap <silent> " <Cmd>lua require("which-key").show("\"", {mode = "n", auto = true})
xnoremap # y?\V"
nnoremap & :&&
nnoremap <silent> ' <Cmd>lua require("which-key").show("'", {mode = "n", auto = true})
xnoremap * y/\V"
nnoremap ; :
nnoremap <silent> <iÞ <Nop>
nnoremap <silent> <aÞ <Nop>
nnoremap <silent> <Þ <Nop>
nnoremap <silent> < <Cmd>lua require("which-key").show("<", {mode = "n", auto = true})
nnoremap <silent> >iÞ <Nop>
nnoremap <silent> >aÞ <Nop>
nnoremap <silent> >Þ <Nop>
nnoremap <silent> > <Cmd>lua require("which-key").show(">", {mode = "n", auto = true})
nnoremap Y y$
nnoremap <silent> [Þ <Nop>
nnoremap <silent> [ <Cmd>lua require("which-key").show("[", {mode = "n", auto = true})
nnoremap <silent> ]Þ <Nop>
nnoremap <silent> ] <Cmd>lua require("which-key").show("]", {mode = "n", auto = true})
nnoremap <silent> ` <Cmd>lua require("which-key").show("`", {mode = "n", auto = true})
nnoremap <silent> ciÞ <Nop>
nnoremap <silent> caÞ <Nop>
nnoremap <silent> cÞ <Nop>
nnoremap <silent> c <Cmd>lua require("which-key").show("c", {mode = "n", auto = true})
nnoremap <silent> dÞ <Nop>
nnoremap <silent> d <Cmd>lua require("which-key").show("d", {mode = "n", auto = true})
nnoremap <silent> diÞ <Nop>
nnoremap <silent> daÞ <Nop>
xnoremap <silent> gÞ <Nop>
xnoremap <silent> g <Cmd>lua require("which-key").show("g", {mode = "v", auto = true})
nnoremap <silent> gUiÞ <Nop>
nnoremap <silent> gUaÞ <Nop>
nnoremap <silent> gUÞ <Nop>
nnoremap <silent> g~iÞ <Nop>
nnoremap <silent> g~aÞ <Nop>
nnoremap <silent> g~Þ <Nop>
nnoremap <silent> guiÞ <Nop>
nnoremap <silent> guaÞ <Nop>
nnoremap <silent> guÞ <Nop>
nnoremap <silent> gÞ <Nop>
nnoremap <silent> g <Cmd>lua require("which-key").show("g", {mode = "n", auto = true})
nnoremap <silent> vÞ <Nop>
nnoremap <silent> v <Cmd>lua require("which-key").show("v", {mode = "n", auto = true})
nnoremap <silent> viÞ <Nop>
nnoremap <silent> vaÞ <Nop>
nnoremap <silent> yiÞ <Nop>
nnoremap <silent> yaÞ <Nop>
nnoremap <silent> yÞ <Nop>
nnoremap <silent> y <Cmd>lua require("which-key").show("y", {mode = "n", auto = true})
nnoremap <silent> zfiÞ <Nop>
nnoremap <silent> zfaÞ <Nop>
nnoremap <silent> zfÞ <Nop>
nnoremap <silent> zÞ <Nop>
nnoremap <silent> z <Cmd>lua require("which-key").show("z", {mode = "n", auto = true})
nnoremap <silent> <C-W>Þ <Nop>
nnoremap <silent> <C-W> <Cmd>lua require("which-key").show("\23", {mode = "n", auto = true})
tnoremap <C-X> 
nnoremap <C-N> <Cmd>NvimTreeToggle
nnoremap <C-C> <Cmd>%y+
nnoremap <C-S> <Cmd>w
nnoremap <C-K> k
nnoremap <C-J> j
nnoremap <C-H> h
nnoremap <Plug>PlenaryTestFile :lua require('plenary.test_harness').test_file(vim.fn.expand("%:p"))
nnoremap <C-L> l
inoremap  ^i
inoremap  <Left>
inoremap <NL> <Down>
inoremap  <Up>
inoremap  <Right>
cnoremap <silent>  <Cmd>lua require("which-key").show("\18", {mode = "c", auto = true})
inoremap <silent>  <Cmd>lua require("which-key").show("\18", {mode = "i", auto = true})
inoremap  u
inoremap  u
inoremap jk 
let &cpo=s:cpo_save
unlet s:cpo_save
set background=light
set clipboard=unnamedplus
set expandtab
set fillchars=eob:\ 
set helplang=pt
set ignorecase
set laststatus=3
set noloadplugins
set mouse=a
set packpath=C:\\tools\\neovim\\nvim-win64\\share\\nvim\\runtime
set noruler
set runtimepath=~\\AppData\\Local\\nvim,~\\AppData\\Local\\nvim-data\\lazy\\lazy.nvim,~/AppData/Local/nvim-data/lazy/which-key.nvim,~\\AppData\\Local\\nvim-data\\lazy\\cmp-path,~\\AppData\\Local\\nvim-data\\lazy\\cmp-buffer,~\\AppData\\Local\\nvim-data\\lazy\\cmp-nvim-lsp,~\\AppData\\Local\\nvim-data\\lazy\\cmp-nvim-lua,~\\AppData\\Local\\nvim-data\\lazy\\cmp_luasnip,~\\AppData\\Local\\nvim-data\\lazy\\nvim-autopairs,~\\AppData\\Local\\nvim-data\\lazy\\friendly-snippets,~\\AppData\\Local\\nvim-data\\lazy\\LuaSnip,~\\AppData\\Local\\nvim-data\\lazy\\nvim-cmp,~\\AppData\\Local\\nvim-data\\lazy\\indent-blankline.nvim,~\\AppData\\Local\\nvim-data\\lazy\\nvim-lspconfig,~\\AppData\\Local\\nvim-data\\lazy\\nvim-colorizer.lua,~\\AppData\\Local\\nvim-data\\lazy\\gitsigns.nvim,~\\AppData\\Local\\nvim-data\\lazy\\nvim-web-devicons,~\\AppData\\Local\\nvim-data\\lazy\\nvim-tree.lua,~\\AppData\\Local\\nvim-data\\lazy\\plenary.nvim,~\\AppData\\Local\\nvim-data\\lazy\\nvim-treesitter,~\\AppData\\Local\\nvim-data\\lazy\\telescope.nvim,~\\AppData\\Local\\nvim-data\\lazy\\ui,~\\AppData\\Local\\nvim-data\\lazy\\NvChad,C:\\tools\\neovim\\nvim-win64\\share\\nvim\\runtime,C:\\tools\\neovim\\nvim-win64\\lib\\nvim,~\\AppData\\Local\\nvim-data\\lazy\\readme,~\\AppData\\Local\\nvim-data\\lazy\\cmp-path\\after,~\\AppData\\Local\\nvim-data\\lazy\\cmp-buffer\\after,~\\AppData\\Local\\nvim-data\\lazy\\cmp-nvim-lsp\\after,~\\AppData\\Local\\nvim-data\\lazy\\cmp-nvim-lua\\after,~\\AppData\\Local\\nvim-data\\lazy\\cmp_luasnip\\after,~\\AppData\\Local\\nvim-data\\lazy\\indent-blankline.nvim\\after
set shiftwidth=4
set shortmess=nFtfslOiIoTx
set noshowmode
set showtabline=2
set smartcase
set smartindent
set softtabstop=2
set splitbelow
set splitright
set statusline=%!v:lua.require('nvchad.stl.default')()
set tabline=%!v:lua.require('nvchad.tabufline.modules')()
set tabstop=4
set termguicolors
set timeoutlen=400
set undofile
set updatetime=250
set whichwrap=<>[]hl,b,s
set window=35
" vim: set ft=vim :
