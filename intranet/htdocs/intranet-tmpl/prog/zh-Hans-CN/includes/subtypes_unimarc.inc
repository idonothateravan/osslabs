<a onclick="javascript:if (document.getElementsByName('Coded_Fields')[0].style.display=='none'){document.getElementsByName('Coded_Fields')[0].style.display='block';} else {document.getElementsByName('Coded_Fields')[0].style.display='none';}">编码信息的条件</a>
<div id="yui-b" style="display:none;" name="Coded_Fields" >
<!-- SUBTYPE LIMITS -->
		<fieldset>
		<legend>编码字段</legend>
		<p>
		<label>观众</label>
		<select name="limit" class="subtype">
            <option value="" SELECTED="selected" >任何</option>
			<option value="aud:a">青少年，一般性</option>
			<option value="aud:b">学前儿童，0-5 岁</option>
			<option value="aud:c">学前儿童，（5-8岁）</option>
			<option value="aud:d">儿童，9-14 岁</option>
			<option value="aud:e">青少年</option>
			<option value="aud:k">成人，学术性</option>
			<option value="aud:m">成人，一般性</option>
			<option value="aud:u">不明</option>
		</select>
		</p>
		<p>
		<label>打印</label>
        <select name="limit" class="subtype">
			<option value="" selected="selected" >任何</option>
				<option value="Material-type:r">一般印刷数据</option>
				<option value="Material-type:d">大字体印刷数据</option>
				<option value="Material-type:e">报纸形式</option>
				<option value="Material-type:f">点字本</option>
				<option value="Material-type:g">微缩资料</option>
				<option value="Material-type:h">手稿</option>
				<option value="Material-type:i">多媒体</option>
				<option value="Material-type:j">缩印资料</option>
				<option value="Material-type:z">其他形式文本材料</option>
		</select>
		</p>
		<p>
		<label>文学体裁</label>
		<select name="limit" class="subtype">
			<option value="" selected="selected" >任何</option>
            <option value="Literature-Code:a">小说</option>
            <option value="Literature-Code:b">戏剧（包括电视剧、电影剧本）</option>
            <option value="Literature-Code:c">散文（小品、杂文、骈文）</option>
            <option value="Literature-Code:d">幽默(humor)；讽刺文(satire)</option>
            <option value="Literature-Code:e">书信</option>
            <option value="Literature-Code:f">短篇故事、民间故事、寓言、神话、童话、传说</option>
            <option value="Literature-Code:g">诗词、曲、赋、歌谣</option>
            <option value="Literature-Code:h">演说稿、对话录</option>
            <option value="Literature-Code:y">非文学作品</option>
            <option value="Literature-Code:z">其他或多种体裁（例如：游记、传记、报导文学、对联）</option>
		</select>
		</p>
        <p>
		<label>传记</label>
        <select name="limit" class="subtype" size="1">
            <option value="">任何</option>
            <option value="Biography-code:y">不是自传</option>
            <option value="Biography-code:a">自传</option>
            <option value="Biography-code:b">分传</option>
            <option value="Biography-code:c">总传</option>
            <option value="Biography-code:d">包含传记资料</option>
		</select>
        </p>
        <p>
		<label>插图</label>
        <select name="limit" class="subtype" size="1">
            <option value="">任何</option>
            <option value="Illustration-Code:a">图</option>
            <option value="Illustration-Code:b">地图</option>
            <option value="Illustration-Code:c">肖像</option>
            <option value="Illustration-Code:d">航行图</option>
            <option value="Illustration-Code:e">计划</option>
            <option value="Illustration-Code:f">图版</option>
            <option value="Illustration-Code:g">音乐</option>
            <option value="Illustration-Code:h">影钞；书影</option>
            <option value="Illustration-Code:i">徽章</option>
            <option value="Illustration-Code:j">谱系表</option>
            <option value="Illustration-Code:k">表格</option>
            <option value="Illustration-Code:l">样本</option>
            <option value="Illustration-Code:m">乐谱资料</option>
            <option value="Illustration-Code:n">透明图片（如附在书袋中的透明片）</option>
            <option value="Illustration-Code:o">彩饰</option>
            <option value="Illustration-Code:y">无插图</option>
        </select>
        </p>
		<p>
		<label>内容</label>
		<select name="limit" class="subtype">
			<option value="" >任何</option>
            <option value="ctype:a" >书目（如专科书目）</option>
            <option value="ctype:b" >馆藏目录</option>
            <option value="ctype:c" >索引</option>
            <option value="ctype:d" >摘要</option>
            <option value="ctype:e" >字典</option>
            <option value="ctype:f" >百科全书、类书</option>
            <option value="ctype:g" >名录、指南</option>
            <option value="ctype:h" >项目计划</option>
            <option value="ctype:i" >统计资料</option>
            <option value="ctype:j" >编程教材</option>
            <option value="ctype:k" >专利</option>
            <option value="ctype:l" >标准（技术规范）</option>
            <option value="ctype:m" >博士论文（dissertation）或是硕士论文（thesis）</option>
            <option value="ctype:n" >法规</option>
            <option value="ctype:o" >数值表</option>
            <option value="ctype:p" >技术报告</option>
            <option value="ctype:q" >考卷</option>
            <option value="ctype:r" >文献评析</option>
            <option value="ctype:s" >条约、协议</option>
            <option value="ctype:t" >漫画、连环图书</option>
            <option value="ctype:z" >其他</option>
		</select>
        </p>
        <p>
		<label>视频类型</label>
		<select name="limit" class="subtype">
            <option value="">任何</option>
			<option value="Video-mt:a">电影片</option>
			<option value="Video-mt:b">投影资料</option>
			<option value="Video-mt:c">录像带</option>
		</select>
        </p>
		</fieldset>
		<fieldset>
		<legend>期刊</legend><p>
		<p>
		<label>期刊类型</label>
		<select name="limit" class="subtype">
           <option value="">任何类型</option>
           <option value="Type-Of-Serial:a">期刊</option>
			<option value="Type-Of-Serial:b">专题论文期刊</option>
			<option value="Type-Of-Serial:c">报纸</option>
			<option value="Type-Of-Serial:z">其他</option>
		</select>
		</p>
		<p>
		<label>期刊</label>
		<select name="limit" class="subtype">
			<option value="">任何</option>
				<option value="Frequency-code:a">日记</option>
				<option value="Frequency-code:b">半周刊</option>
				<option value="Frequency-code:c">周刊</option>
				<option value="Frequency-code:d">半周刊</option>
				<option value="Frequency-code:e">半月刊</option>
				<option value="Frequency-code:f">月刊</option>
				<option value="Frequency-code:g">半月刊</option>
				<option value="Frequency-code:h">季刊</option>
				<option value="Frequency-code:i">一年三次</option>
				<option value="Frequency-code:j">半年刊</option>
				<option value="Frequency-code:k">年鉴</option>
				<option value="Frequency-code:l">半年刊</option>
				<option value="Frequency-code:m">三年刊</option>
				<option value="Frequency-code:n">一周三次</option>
				<option value="Frequency-code:o">一月三次</option>
				<option value="Frequency-code:u">不明</option>
				<option value="Frequency-code:y">不定期</option>
				<option value="Frequency-code:i">其他</option>
		</select>
		</p>
		<p>
		<label>规则性</label>
		<select name="limit" class="subtype">
            <option value="">任何规则性</option>
				<option value="Regularity-code:u">不明</option>
				<option value="Regularity-code:a">有规则</option>
				<option value="Regularity-code:b">定期性的不规则（如月刊，除7—8 月外）</option>
				<option value="Regularity-code:y">不正常</option>
		</select>
        </p>

        </fieldset>
		<fieldset>
		<legend>图片</legend><p>
		<select name="limit" class="subtype">
				<option value="">任何</option>
				<option value="Graphics-type:a">拼贴</option>
				<option value="Graphics-type:b">素描</option>
				<option value="Graphics-type:c">绘画</option>
				<option value="Graphics-type:d">照相复制品</option>
				<option value="Graphics-type:e">负片</option>
				<option value="Graphics-type:f">照片</option>
				<option value="Graphics-type:h">图片</option>
				<option value="Graphics-type:i">打印</option>
				<option value="Graphics-type:k">工程图</option>
				<option value="Graphics-type:z">其他非投影性图类型</option>
		</select>
		<select name="limit" class="subtype">
            <option value="">任何</option>
            <option value="Graphics-support:a">帆布</option>
            <option value="Graphics-support:b">布里斯托纸板</option>
            <option value="Graphics-support:c">纸板</option>
            <option value="Graphics-support:d">玻璃</option>
            <option value="Graphics-support:j">石膏</option>
            <option value="Graphics-support:k">夹板</option>
            <option value="Graphics-support:l">瓷器</option>
            <option value="Graphics-support:m">石头</option>
            <option value="Graphics-support:n">木材</option>
            <option value="Graphics-support:u">不明</option>
            <option value="Graphics-support:v">混合收藏</option>
            <option value="Graphics-support:e">合成品</option>
            <option value="Graphics-support:f">皮革（羊皮、牛皮等）</option>
            <option value="Graphics-support:g">纺织物</option>
            <option value="Graphics-support:h">金属</option>
            <option value="Graphics-support:i">纸</option>
            <option value="Graphics-support:z">其他的</option>
		</select>
        </p>

</fieldset>
</div>
