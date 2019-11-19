<?xml version="1.0" encoding="UTF-8"?>

<!--

The MIT License (MIT)

Copyright (c) 2014 - 2019, Andreas Merkle
http://www.blue-andi.de
vscp@blue-andi.de

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

********************************************************************************
Templates to support the generation of C-modules.

********************************************************************************
-->

<!DOCTYPE stylesheet [
    <!ENTITY LF  "&#xA;" >
    <!ENTITY TAB "&#x9;" >
]>

<xsl:stylesheet
    xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
    xmlns:xs="http://www.w3.org/2001/XMLSchema"
    xmlns:fn="http://www.w3.org/2005/xpath-functions"
    version="2.0">

    <!--
    ****************************************************************************
        INCLUDES
    ****************************************************************************
    -->
    
    <!--
    ****************************************************************************
        GLOBAL VARIABLES
    ****************************************************************************
    -->
    <xsl:variable name="ctools.global.maxLineLength">100</xsl:variable>
    
    <!--
    ****************************************************************************
        TEMPLATES
    ****************************************************************************
    -->
    
    <!-- Header block of a .h file.
        @param  briefDesc   Brief description
        @param  moduleName  Module name (file name without extension)
        @param  author      Name of the module author
        @param  description Module description
    -->
    <xsl:template name="ctools.hHeaderBlock">
        <xsl:param name="license" />
        <xsl:param name="briefDesc" />
        <xsl:param name="moduleName" />
        <xsl:param name="author" />
        <xsl:param name="description" />
        <xsl:value-of select="$license" />
        <xsl:text>/*******************************************************************************&LF;</xsl:text>
        <xsl:text>    DESCRIPTION&LF;</xsl:text>
        <xsl:text>*******************************************************************************/&LF;</xsl:text>
        <xsl:text>/**&LF;</xsl:text>
        <xsl:text>@brief  </xsl:text><xsl:value-of select="$briefDesc" /><xsl:text>&LF;</xsl:text>
        <xsl:text>@file   </xsl:text><xsl:value-of select="$moduleName" /><xsl:text>.h&LF;</xsl:text>
        <xsl:text>@author </xsl:text><xsl:value-of select="$author" /><xsl:text>&LF;</xsl:text>
        <xsl:text>&LF;</xsl:text>
        <xsl:text>@section desc Description&LF;</xsl:text>
        <xsl:call-template name="ctools.private.limitString">
            <xsl:with-param name="string" select="$description" />
            <xsl:with-param name="max" select="$ctools.global.maxLineLength" />
        </xsl:call-template>        
        <xsl:text>&LF;</xsl:text>
        <xsl:text>&LF;</xsl:text>
        <xsl:text>This file is automatically generated. Don't change it manually.&LF;</xsl:text>
        <xsl:text>&LF;</xsl:text>
        <xsl:text>*******************************************************************************/&LF;</xsl:text>
        <xsl:text>&LF;</xsl:text>
        <xsl:text>#ifndef __</xsl:text><xsl:value-of select="fn:upper-case($moduleName)" /><xsl:text>_H__&LF;</xsl:text>
        <xsl:text>#define __</xsl:text><xsl:value-of select="fn:upper-case($moduleName)" /><xsl:text>_H__&LF;</xsl:text>
    </xsl:template>
    
    <!-- Header block of a .c file.
        @param  briefDesc   Brief description
        @param  moduleName  Module name (file name without extension)
        @param  author      Name of the module author
    -->
    <xsl:template name="ctools.cHeaderBlock">
        <xsl:param name="license" />
        <xsl:param name="briefDesc" />
        <xsl:param name="moduleName" />
        <xsl:param name="author" />
        <xsl:value-of select="$license" />
        <xsl:text>/*******************************************************************************&LF;</xsl:text>
        <xsl:text>    DESCRIPTION&LF;</xsl:text>
        <xsl:text>*******************************************************************************/&LF;</xsl:text>
        <xsl:text>/**&LF;</xsl:text>
        <xsl:text>@brief  </xsl:text><xsl:value-of select="$briefDesc" /><xsl:text>&LF;</xsl:text>
        <xsl:text>@file   </xsl:text><xsl:value-of select="$moduleName" /><xsl:text>.c&LF;</xsl:text>
        <xsl:text>@author </xsl:text><xsl:value-of select="$author" /><xsl:text>&LF;</xsl:text>
        <xsl:text>&LF;</xsl:text>
        <xsl:text>@section desc Description&LF;</xsl:text>
        <xsl:text>@see </xsl:text><xsl:value-of select="$moduleName" /><xsl:text>.h&LF;</xsl:text>
        <xsl:text>&LF;</xsl:text>
        <xsl:text>This file is automatically generated. Don't change it manually.&LF;</xsl:text>
        <xsl:text>&LF;</xsl:text>
        <xsl:text>*******************************************************************************/&LF;</xsl:text>
    </xsl:template>
    
    <!-- Comment block
        @param  name    Comment block name
    -->
    <xsl:template name="ctools.generalBlock">
        <xsl:param name="name" />
        <xsl:text>/*******************************************************************************&LF;</xsl:text>
        <xsl:text>    </xsl:text><xsl:value-of select="fn:upper-case($name)" /><xsl:text>&LF;</xsl:text>
        <xsl:text>*******************************************************************************/&LF;</xsl:text>
    </xsl:template>

    <!-- Footer of a .h file
        @param  moduleName  Module name (file name without extension)
    -->
    <xsl:template name="ctools.hFooterBlock">
        <xsl:param name="moduleName" />
        <xsl:text>#endif /* __</xsl:text><xsl:value-of select="fn:upper-case($moduleName)" /><xsl:text>_H__ */&LF;</xsl:text>
    </xsl:template>
    
    <!-- Footer of a .c file -->
    <xsl:template name="ctools.cFooterBlock">
    </xsl:template>
    
    <!-- Generate a #define
        @param  comment     Comment
        @param  moduleName  Module name (file name without extension)
        @param  name        Name of the #define
        @param  value       Value of the #define
    -->
    <xsl:template name="ctools.define">
        <xsl:param name="comment" />
        <xsl:param name="moduleName" />
        <xsl:param name="name" />
        <xsl:param name="value" />
        <xsl:text>/**&LF;</xsl:text>
        <xsl:call-template name="ctools.commentPart">
            <xsl:with-param name="comment" select="$comment" />
        </xsl:call-template>
        <xsl:text> */&LF;</xsl:text>
        <xsl:text>#define </xsl:text>
        <xsl:call-template name="ctools.define.name">
            <xsl:with-param name="moduleName">
                <xsl:value-of select="$moduleName" />
            </xsl:with-param>
            <xsl:with-param name="name">
                <xsl:value-of select="$name" />
            </xsl:with-param>
        </xsl:call-template>
        <xsl:text> </xsl:text>
        <xsl:value-of select="$value" />
        <xsl:text>&LF;</xsl:text>
    </xsl:template>
    
    <!-- Generate the name of a define.
        @param  moduleName  Module name (file name without extension)
        @param  name        Name of the #define
    -->
    <xsl:template name="ctools.define.name">
        <xsl:param name="moduleName" />
        <xsl:param name="name" />
        <xsl:if test="moduleName">
            <xsl:value-of select="fn:upper-case(fn:replace($moduleName, ' ', '_'))" />
            <xsl:text>_</xsl:text>
        </xsl:if>
        <xsl:value-of select="fn:upper-case(fn:replace($name, ' ', '_'))" />
    </xsl:template>
    
    <!-- Generates a function or a function prototype.
        If 'body' is empty, a function prototype will be generated.
        @param  comment     Function comment
        @param  returnType  Function return type
        @param  moduleName  Module name (file name without extension)
        @param  name        Name of the #define
        @param  parameter   Function parameters
        @param  body        Function body
    -->
    <xsl:template name="ctools.function">
        <xsl:param name="comment" />
        <xsl:param name="returnType" />
        <xsl:param name="moduleName" />
        <xsl:param name="name" />
        <xsl:param name="parameter" />
        <xsl:param name="body" />
        <xsl:text>/**&LF;</xsl:text>
        <xsl:call-template name="ctools.commentPart">
            <xsl:with-param name="comment" select="$comment" />
        </xsl:call-template>
        <xsl:text> */&LF;</xsl:text>
        <xsl:value-of select="$returnType" />
        <xsl:text> </xsl:text>
        <xsl:value-of select="fn:replace($moduleName, ' ', '_')" />
        <xsl:text>_</xsl:text>
        <xsl:call-template name="ctools.hungarianForm">
            <xsl:with-param name="string">
                <xsl:value-of select="$name" />
            </xsl:with-param>
        </xsl:call-template>
        <xsl:text>(</xsl:text>
        <xsl:value-of select="$parameter" />
        <xsl:text>)</xsl:text>
        <xsl:choose>
            <xsl:when test="$body = ''">
                <xsl:text>;&LF;</xsl:text>
            </xsl:when>
            <xsl:otherwise>
                <xsl:text>&LF;</xsl:text>
                <xsl:text>{&LF;</xsl:text>
                <xsl:value-of select="$body" />
                <xsl:text>}&LF;</xsl:text>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>
    
    <!-- Generates a comment part of several lines.
        @param  comment Comment
    -->
    <xsl:template name="ctools.commentPart">
        <xsl:param name="comment" />
        <xsl:variable name="limitedString">
            <xsl:call-template name="ctools.private.commentPart1">
                <xsl:with-param name="string" select="$comment" />
            </xsl:call-template>
        </xsl:variable>
        <xsl:call-template name="ctools.private.commentPart2">
            <xsl:with-param name="comment" select="$limitedString" />
        </xsl:call-template>
    </xsl:template>
    
    <!-- Private helper template, which limits every line in its length. Each line in the
         given string is limited separatly.
        @param  string  String
    -->
    <xsl:template name="ctools.private.commentPart1">
        <xsl:param name="string" />
        <xsl:choose>
            <xsl:when test="fn:contains($string, '&#xA;')">
                <xsl:call-template name="ctools.private.limitString">
                    <xsl:with-param name="string" select="fn:substring-before($string, '&#xA;')" />
                    <xsl:with-param name="max" select="$ctools.global.maxLineLength" />
                </xsl:call-template>
                <xsl:text>&LF;</xsl:text>
                <xsl:call-template name="ctools.private.commentPart1">
                    <xsl:with-param name="string" select="fn:substring-after($string, '&#xA;')" />
                </xsl:call-template>
            </xsl:when>
            <xsl:otherwise>
                <xsl:call-template name="ctools.private.limitString">
                    <xsl:with-param name="string" select="$string" />
                    <xsl:with-param name="max" select="$ctools.global.maxLineLength" />
                </xsl:call-template>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>
    
    <!-- Private helper template, which generates a comment part of several lines.
        @param  comment Comment
    -->
    <xsl:template name="ctools.private.commentPart2">
        <xsl:param name="comment" />
        <xsl:text> * </xsl:text>
        <xsl:choose>
            <xsl:when test="fn:contains($comment, '&#xA;')">
                <xsl:value-of select="fn:substring-before($comment, '&#xA;')" /><xsl:text>&LF;</xsl:text>
                <xsl:call-template name="ctools.private.commentPart2">
                    <xsl:with-param name="comment" select="fn:substring-after($comment, '&#xA;')" />
                </xsl:call-template>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="$comment" /><xsl:text>&LF;</xsl:text>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>
    
    <!-- Returns a string in hungarian form. The form itself depends on the spaces in the string!
        @param  string  String to convert
    -->
    <xsl:template name="ctools.hungarianForm">
        <xsl:param name="string" />
        <xsl:choose>
            <xsl:when test="fn:contains($string, ' ')">
                <xsl:value-of select="fn:lower-case(fn:substring-before($string, ' '))" />
                <xsl:call-template name="ctools.private.hungarianForm">
                    <xsl:with-param name="string" select="fn:lower-case(fn:substring-after($string, ' '))" />
                </xsl:call-template>
            </xsl:when>
            <xsl:otherwise>
                <xsl:value-of select="fn:lower-case($string)" />
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>
        
    <!-- Private helper template, which returns a string in hungarian form. The form itself depends on the spaces in the string!
        @param  string  String to convert
    -->
    <xsl:template name="ctools.private.hungarianForm">
        <xsl:param name="string" />
        <xsl:value-of select="fn:upper-case(fn:substring($string,1, 1))" />
        <xsl:if test="fn:string-length($string) > 1">
            <xsl:choose>
                <xsl:when test="fn:contains($string, ' ')">
                    <xsl:value-of select="fn:substring-before(fn:substring($string, 2, fn:string-length($string) - 1), ' ')" />
                    <xsl:call-template name="ctools.private.hungarianForm">
                        <xsl:with-param name="string" select="fn:substring-after(fn:substring($string, 2, fn:string-length($string) - 1), ' ')" />
                    </xsl:call-template>
                </xsl:when>
                <xsl:otherwise>
                    <xsl:value-of select="fn:substring($string, 2, fn:string-length($string) - 1)" />
                </xsl:otherwise>
            </xsl:choose>
        </xsl:if>
    </xsl:template>
    
    <!-- Private helpter template, which returns the string before the last occurrence of the given delimiter.
        @param string       String
        @param delimiter    Delimiter
    -->
    <xsl:template name="ctools.private.substring-before-last">
        <xsl:param name="string" />
        <xsl:param name="delimiter" />
        <xsl:choose>
            <xsl:when test="fn:contains($string, $delimiter)">
                <xsl:value-of select="fn:substring-before($string, $delimiter)" />
                <xsl:if test="fn:contains(fn:substring-after($string, $delimiter), $delimiter)">
                    <xsl:value-of select="$delimiter" />
                </xsl:if>
                <xsl:call-template name="ctools.private.substring-before-last">
                    <xsl:with-param name="string" select="fn:substring-after($string, $delimiter)" />
                    <xsl:with-param name="delimiter" select="$delimiter" />
                </xsl:call-template>
            </xsl:when>
            <xsl:otherwise>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>
    
    <!-- Private helper template, which adds one or more line feeds to limit the string length in one line.
        @param string   String
        @param max      Maximum string length in a line
    -->
    <xsl:template name="ctools.private.limitString">
        <xsl:param name="string" />
        <xsl:param name="max" />
        <xsl:choose>
            <xsl:when test="fn:number($max) gt fn:string-length($string)">
                <xsl:value-of select="$string" />
            </xsl:when>
            <xsl:otherwise>
                <xsl:variable name="stringCut" select="fn:substring($string, 1, $max)" />
                <xsl:variable name="stringPart">
                    <xsl:call-template name="ctools.private.substring-before-last">
                        <xsl:with-param name="string" select="$stringCut" />
                        <xsl:with-param name="delimiter" select="' '" />
                    </xsl:call-template>
                </xsl:variable>
                <xsl:value-of select="$stringPart" />
                <xsl:text>&LF;</xsl:text>
                <xsl:call-template name="ctools.private.limitString">
                    <xsl:with-param name="string" select="fn:substring($string, string-length($stringPart) + 2, string-length($string) - string-length($stringPart))" />
                    <xsl:with-param name="max" select="$max" />
                </xsl:call-template>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>
    
</xsl:stylesheet>
