class MyMenuBar extends HTMLElement {

    static get template() {
        return html`
            <style>
                header.top-bar {
                    position: fixed;
                    width: 100%;
                }
            
                nav.top-menubar  {
                    display: flex;
                    align-items: center;
                    justify-content: flex-end;
            
                    height: 70px;
                    padding: 0 50px;
                    background: rgba(36, 36, 36, .7);
                    backdrop-filter: saturate(50%) blur(8px);
                }
            
                nav.top-menubar .logo-search-bar {
                    margin-right: auto;
            
                    display: flex;
                    align-items: center;
                }
                nav.top-menubar .logo-search-bar a {
                    transition: opacity .25s;
                }
                nav.top-menubar .logo-search-bar a:hover {
                    opacity: .6;
                }
            
                nav.top-menubar .logo-search-bar img {
                    height: 50px;
                    margin-right: 3px;
                }
            
                nav.top-menubar .logo-search-bar div {
                    display: flex;
                    align-items: center;
            
                    border-radius: 11px;
                    padding: 0 10px;
            
                    margin-left: 32px;
                    height: 43px;
                    width: max-content;
            
                    background: #1a1a1a;
                }
                nav.top-menubar .logo-search-bar div:hover {
                    box-shadow: 0 0 0 1px #936ae0;
                    outline: .01px #936ae0;
                }
            
                nav.top-menubar .logo-search-bar div svg.search-icon {
                    width: 15px;
                    color:#e0e0e0;
                    margin-right: 6px;
                }
                nav.top-menubar .logo-search-bar div input[type=search] {
                    width: 80px;
                    height: 80%;
                    padding: 13px 0 10px;
            
                    background: none;
                    
                    font: 600 sans-serif;
                    color: #e0e0e0;
                    border: 0;
                    transition: width .3s;
                }
                nav.top-menubar .logo-search-bar div input[type=search]:focus,
                nav.top-menubar .logo-search-bar div input[type=search]:hover {
                    width: 170px;
            
                    border: 0;
                    box-shadow: 0 0 0 0;
                    outline: 0;
                }
            
                nav.top-menubar .logo-search-bar div input[type=search]::placeholder {
                    font: 600 14px sans-serif;
                }
            
                nav.top-menubar .logo-search-bar div input[type=search]:hover::placeholder {
                    color: #afafaf;
                }
            
                nav.top-menubar .menus {
                    display: flex;
            
                    height: 100%;
                    align-items: center;
                    width: max-content;
                }
            
                nav.top-menubar .menus li {
                    list-style: none;
                    padding: 0 12px;
                }
            
                nav.top-menubar .menus li,
                nav.top-menubar .menus a {
                    display: flex;
                    align-items: center;
                    height: 100%;
            
                    color: #e0e0e0;
                    font: 500 18px sans-serif;
                    transition: color .25s;
                }
            
                nav.top-menubar .menus a:hover {
                    color: #936ae0;
                }
            
                nav.top-menubar span {
                    margin: 0 20px;
                    width: 1px;
            
                    height: 40%;
            
                    background: #3e3f43;
                    box-shadow: 1px 1px 5px #1a1a1a;
                }
            
                nav.top-menubar .social-media {
                    display: flex;
                    align-items: center;
                    justify-content: space-around;
            
                    width: max-content;
                }
            
                nav.top-menubar .social-media a {
                    margin: 0 10px;
                }
                nav.top-menubar .social-media a svg {
                    width: 22px; 
                    fill: #9b9b9b;
                    transition: fill .4s;
                }
                nav.top-menubar .social-media a svg:hover {
                    fill: #e0e0e0;
                }
            </style>

            <header class="top-bar">
                <nav class="top-menubar">
                    <div class="logo-search-bar">
                        <a href="#">
                            <img src="https://stray.game/assets/images/logo-stray.png" alt="Vite logo icon">
                        </a>
                        <div class="search">
                            <svg width="20" height="20" class="search-icon" viewBox="0 0 20 20"><path d="M14.386 14.386l4.0877 4.0877-4.0877-4.0877c-2.9418 2.9419-7.7115 2.9419-10.6533 0-2.9419-2.9418-2.9419-7.7115 0-10.6533 2.9418-2.9419 7.7115-2.9419 10.6533 0 2.9419 2.9418 2.9419 7.7115 0 10.6533z" stroke="currentColor" fill="none" fill-rule="evenodd" stroke-linecap="round" stroke-linejoin="round"></path></svg>
                            <input type="search" name="search" placeholder="Search">
                        </div>
                    </div>

                    <div class="menus">
                        <li><a href="./index.html">Home</a></li>
                        <li><a href="#">Sobre</a></li>
                        <li><a href="#">Serviços</a></li>
                        <li><a href="./contato.html">Contato</a></li>
                    </div>

                    <span></span>

                    <div class="social-media">
                        <a href="#" class="social-media-discord">
                            <svg role="img" viewBox="0 0 24 24" xmlns="http://www.w3.org/2000/svg"><title>Discord</title><path d="M20.317 4.3698a19.7913 19.7913 0 00-4.8851-1.5152.0741.0741 0 00-.0785.0371c-.211.3753-.4447.8648-.6083 1.2495-1.8447-.2762-3.68-.2762-5.4868 0-.1636-.3933-.4058-.8742-.6177-1.2495a.077.077 0 00-.0785-.037 19.7363 19.7363 0 00-4.8852 1.515.0699.0699 0 00-.0321.0277C.5334 9.0458-.319 13.5799.0992 18.0578a.0824.0824 0 00.0312.0561c2.0528 1.5076 4.0413 2.4228 5.9929 3.0294a.0777.0777 0 00.0842-.0276c.4616-.6304.8731-1.2952 1.226-1.9942a.076.076 0 00-.0416-.1057c-.6528-.2476-1.2743-.5495-1.8722-.8923a.077.077 0 01-.0076-.1277c.1258-.0943.2517-.1923.3718-.2914a.0743.0743 0 01.0776-.0105c3.9278 1.7933 8.18 1.7933 12.0614 0a.0739.0739 0 01.0785.0095c.1202.099.246.1981.3728.2924a.077.077 0 01-.0066.1276 12.2986 12.2986 0 01-1.873.8914.0766.0766 0 00-.0407.1067c.3604.698.7719 1.3628 1.225 1.9932a.076.076 0 00.0842.0286c1.961-.6067 3.9495-1.5219 6.0023-3.0294a.077.077 0 00.0313-.0552c.5004-5.177-.8382-9.6739-3.5485-13.6604a.061.061 0 00-.0312-.0286zM8.02 15.3312c-1.1825 0-2.1569-1.0857-2.1569-2.419 0-1.3332.9555-2.4189 2.157-2.4189 1.2108 0 2.1757 1.0952 2.1568 2.419 0 1.3332-.9555 2.4189-2.1569 2.4189zm7.9748 0c-1.1825 0-2.1569-1.0857-2.1569-2.419 0-1.3332.9554-2.4189 2.1569-2.4189 1.2108 0 2.1757 1.0952 2.1568 2.419 0 1.3332-.946 2.4189-2.1568 2.4189Z"></path></svg>
                        </a>
                        <a href="#" class="social-media-twitter">
                            <svg role="img" viewBox="0 0 24 24" xmlns="http://www.w3.org/2000/svg"><title>Twitter</title><path d="M23.953 4.57a10 10 0 01-2.825.775 4.958 4.958 0 002.163-2.723c-.951.555-2.005.959-3.127 1.184a4.92 4.92 0 00-8.384 4.482C7.69 8.095 4.067 6.13 1.64 3.162a4.822 4.822 0 00-.666 2.475c0 1.71.87 3.213 2.188 4.096a4.904 4.904 0 01-2.228-.616v.06a4.923 4.923 0 003.946 4.827 4.996 4.996 0 01-2.212.085 4.936 4.936 0 004.604 3.417 9.867 9.867 0 01-6.102 2.105c-.39 0-.779-.023-1.17-.067a13.995 13.995 0 007.557 2.209c9.053 0 13.998-7.496 13.998-13.985 0-.21 0-.42-.015-.63A9.935 9.935 0 0024 4.59z"></path></svg>
                        </a>
                        <a href="#" class="social-media-github">
                            <svg role="img" viewBox="0 0 24 24" xmlns="http://www.w3.org/2000/svg"><title>GitHub</title><path d="M12 .297c-6.63 0-12 5.373-12 12 0 5.303 3.438 9.8 8.205 11.385.6.113.82-.258.82-.577 0-.285-.01-1.04-.015-2.04-3.338.724-4.042-1.61-4.042-1.61C4.422 18.07 3.633 17.7 3.633 17.7c-1.087-.744.084-.729.084-.729 1.205.084 1.838 1.236 1.838 1.236 1.07 1.835 2.809 1.305 3.495.998.108-.776.417-1.305.76-1.605-2.665-.3-5.466-1.332-5.466-5.93 0-1.31.465-2.38 1.235-3.22-.135-.303-.54-1.523.105-3.176 0 0 1.005-.322 3.3 1.23.96-.267 1.98-.399 3-.405 1.02.006 2.04.138 3 .405 2.28-1.552 3.285-1.23 3.285-1.23.645 1.653.24 2.873.12 3.176.765.84 1.23 1.91 1.23 3.22 0 4.61-2.805 5.625-5.475 5.92.42.36.81 1.096.81 2.22 0 1.606-.015 2.896-.015 3.286 0 .315.21.69.825.57C20.565 22.092 24 17.592 24 12.297c0-6.627-5.373-12-12-12"></path></svg>
                        </a>
                    </div>
                </nav>
            </header>
        `;
    }

    constructor() {
        super();        
    }
}

customElements.define('my-menu-bar', MyMenuBar);