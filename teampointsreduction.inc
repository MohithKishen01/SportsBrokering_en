<table class="table_bg" width="650" align="center" cellpadding="0" cellspacing="0" border="0">
	<tr>
		<td>
			<table class="fieldtitle" width="650" cellpadding="0" cellspacing="0" border="0">
				<tr height="22">
					<td class="title_module" width="600">
                        Sport<font class="module_sep">&nbsp;&raquo;&nbsp;</font>Team Points Reduction<font class="module_sep">&nbsp;&raquo;&nbsp;</font>Soccer
                    </td>
					<td class="help_module" width="50" align="center">
						<font class="cursor" title="Click here to view help..." onclick="UDModule.PROJ.helpClicked ()">Help</font>
					</td>
				</tr>
			</table>
		</td>
	</tr>
	<tr>
		<td class="border_left_bottom_right">
			<table class="table_bg" align="right" cellpadding="0" cellspacing="0" border="0">
				<tr height="22">
					<td width="5">
					</td>
					<td>
						Country
					</td>
					<td width="10">
					</td>
					<td>
						League
					</td>
					<td width="10">
					</td>
					<td>
						Season
					</td>
					<td width="10">
					</td>
                    <td width="55">
                    </td>
				</tr>
				<tr height="26">
					<td>
					</td>
					<td>
						<select class="dropdown" id="cbCountries" onchange="countryChanged_106510107 ()" onkeyup="UDModule.COMP.changeFocus_CV (event, 'cbLeague')">
							<option value="0">[Choose One]</option>
						</select>
					</td>
					<td>
					</td>
					<td>
						<select class="dropdown" id="cbLeague" onchange="leagueChanged_106510107 ()" onkeyup="UDModule.COMP.changeFocus_CV (event, 'cbSeason')">
							<option value="0">[Choose One]</option>
						</select>
					</td>
					<td>
					</td>
					<td>
						<select class="dropdown" id="cbSeason" onkeypup="UDModule.COMP.changeFocus_CV (event, 'btnShow')">
							<option value="0">[Choose One]</option>
						</select>
					</td>
					<td>
					</td>
                    <td>
                        <input type="button" id="btnShow" class="button" value="Show" onclick="showClicked_106510107 ()" />&nbsp;
                    </td>
				</tr>
			</table>
		</td>
	</tr>    
</table>
<%@ include file="editteampoints.inc" %>
<div id="divToolTip" style="position:absolute; visibility:hidden;"></div>
