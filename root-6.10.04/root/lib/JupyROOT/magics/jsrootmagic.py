# -*- coding:utf-8 -*-
#-----------------------------------------------------------------------------
#  Copyright (c) 2016, ROOT Team.
#  Authors: Danilo Piparo <Danilo.Piparo@cern.ch> CERN
#-----------------------------------------------------------------------------

from IPython.core.magic import (Magics, magics_class, line_magic)
from IPython.core.magic_arguments import (argument, magic_arguments, parse_argstring)
from JupyROOT.utils import enableJSVis, disableJSVis, enableJSVisDebug

@magics_class
class JSRootMagics(Magics):
    def __init__(self, shell):
        super(JSRootMagics, self).__init__(shell)

    @line_magic
    @magic_arguments()
    @argument('arg', nargs="?", default="on", help='Enable or disable JavaScript visualisation. Possible values: on (default), off')

    def jsroot(self, line):
        '''Change the visualisation of plots from images to interactive JavaScript objects.'''
        args = parse_argstring(self.jsroot, line)
        if args.arg == 'on':
           enableJSVis()
        elif args.arg == 'off':
           disableJSVis()
        elif args.arg == 'debug':
           enableJSVisDebug()

def load_ipython_extension(ipython):
    ipython.register_magics(JSRootMagics)
