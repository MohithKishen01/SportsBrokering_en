<div id="divTeamPoints" style="position:absolute; visibility:hidden; width:400; height:200">
    <table class="filter_tbl" width="350" cellpadding="0" cellspacing="0" border="0">
        <tr>
            <td colspan="3">
                <table class="title_list" width="350" cellpadding="0" cellspacing="0" border="0">
                    <tr height="22">
                        <td>
                            &nbsp;Team Points
                        </td>
                        <td align="right">
                            Edit&nbsp;
                        </td>
                    </tr>
                </table>
            </td>
        </tr>
        <tr height="22" valign="top">
            <td class="border_left_bottom_right" colspan="3">
                <table class="table_bg" width="100%" cellpadding="2" cellspacing="0" border="0">
                    <tr height="22">
                        <td id="tdTeamPointsHeader" class="subtitle">
                            &nbsp;
                        </td>
                    </tr>
                </table>
            </td>
        </tr>
        <tr height="26">
            <td class="border_left_bottom" width="6" align="right">
                &nbsp;<font class="required">*</font>
            </td>
            <td class="border_bottom" width="100">
                &nbsp;Deduct Points
            </td>
            <td class="border_bottom_right" width="244">
                <input type="textbox" id="txtDeductPoints" class="textboxcenter" maxlength="3" size="3" onkeypress="UDModule.COMP.changeFocus_CV (event, 'txtComments')" />
            </td>
        </tr>
        <tr height="45">
            <td class="border_left_bottom" align="right">
                &nbsp;
            </td>
            <td class="border_bottom">
                &nbsp;Comments
            </td>
            <td class="border_bottom_right" valign="center">
                <textarea id="txtComments" class="textbox" rows="2" cols="42" onkeypress="UDModule.COMP.changeFocus_CV (event, 'btnSubmit')" ></textarea>
            </td>
        </tr>
        <tr height="30">
            <td class="border_left_bottom" colspan="2">
                &nbsp;<font class="clear" title="Click here to close..." onclick="closeClicked_106510107 ()">C L O S E</font>
            </td>
            <td class="border_bottom_right" align="right">
                <input type="button" id="btnSubmit" class="button" value="Submit" onclick="submitClicked_106510107 ()" />&nbsp;&nbsp;
            </td>
        </tr>
    </table>
</div>