<li class="{dede:field.currentstyle/}"><a class="{dede:field.currentstyle/}" href="{dede:field name='typeurl'/}" ><img src="/templets/60/picture/{dede:field name='id'/}.png" width="46" height="46">{dede:field name='typename'/}</a>
          <ul>
          {dede:sql sql='Select * from `dede_arctype` where reid=~id~ ORDER BY id'}
            <li><a currentstyle='on' href="[field:typelink/]" >[field:typename/]</a></li>
          {/dede:sql}
          </ul>
        </li>