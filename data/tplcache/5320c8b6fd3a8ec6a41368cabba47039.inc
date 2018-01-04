<li class="{dede:field.currentstyle/}"><a class="{dede:field.currentstyle/}" href="{dede:field name='typeurl'/}" ><img src="/templets/60/picture/{dede:field name='id'/}.png" width="46" height="46">{dede:field name='typename'/}</a>
          <ul>
          {dede:channel type='son' channel='17' currentstyle="<li><a class='on' href='~typelink~' >~typename~</a> </li>"}
            <li><a href="[field:typelink/]" >[field:typename/]</a></li>
          {/dede:channel}	
          </ul>
        </li>