" This is for windows verson.(tested in windows 10lite) 
" You need to install git and vim-plug for this _vimrc 
" You can chage it for linux also rename the file _vimrc to .vimrc
set number relativenumber	" Show line numbers
set linebreak	" Break lines at word (requires Wrap lines)
set showbreak=+++	" Wrap-broken line prefix
set textwidth=100	" Line wrap (number of cols)
set showmatch	" Highlight matching brace
set visualbell	" Use visual bell (no beeping)
 
set hlsearch	" Highlight all search results
set smartcase	" Enable smart-case search
set ignorecase	" Always case-insensitive
set incsearch	" Searches for strings incrementally
 
set autoindent	" Auto-indent new lines
set shiftwidth=4	" Number of auto-indent spaces
set smartindent	" Enable smart-indent
set smarttab	" Enable smart-tabs
set softtabstop=4	" Number of spaces per Tab
 
" Advanced
set confirm	" Prompt confirmation dialogs
set ruler	" Show row and column ruler information
 
set autochdir	" Change working directory to open buffer
 
set undolevels=1000	" Number of undo levels
set backspace=indent,eol,start	" Backspace behaviour
 
set guioptions -=m
set guioptions -=r
set guioptions -=T
set guifont=consolas:h16
set clipboard=unnamed

call plug#begin()
Plug 'vim-airline/vim-airline'
Plug 'vim-airline/vim-airline-themes'
Plug 'mattn/emmet-vim'
Plug 'morhetz/gruvbox'
Plug 'flazz/vim-colorschemes'
Plug 'scrooloose/nerdtree'
call plug#end()

map <C-n> :NERDTreeToggle<CR>
let g:gruvbox_termcolors=16
let g:user_emmet_leader_key='<C-Z>'
colorscheme gruvbox 
