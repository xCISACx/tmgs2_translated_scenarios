section "b02_m7_000"{
    Message_PauseSkinship();
    if (Date_GetDateOption(3) == 13){
        Character_ChFace(1, 0, 3);
        Character_ChFace(1, 3, 2);
        Voice_PlayVoice("B0207000_G02500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "That's...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes.\nIt's the gift ｛Wakaouji＊＊｝\ngave me.");
        Character_ChFace(1, 0, 10);
        Character_BlinkStart(7, 2, (#1), 2);
        Voice_PlayVoice("B0207000_G02600", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Yeah... Do you like it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes.");
        Character_ChFace(1, 0, 10);
        Character_BlinkStart(7, 3, (#1), 2);
        Character_ChFace(1, 4, 1);
        Voice_PlayVoice("B0207000_G02700", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "... I'm a bit embarrassed.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Wakaouji＊＊｝ is pleased!)");
        Parameter_AddCh1Param(7, 61, 2);
        Parameter_AddCh1Param(7, 60, 1);
        Parameter_AddCh1Param(7, 62, #2);
        }
    else if ((Parameter_ChkPlayer(15) == 1) && (Date_Get_Date_Place2() == 5)){
        Character_ChFace(1, 0, 11);
        Character_ChFace(1, 4, 1);
        Voice_PlayVoice("B0207000_G00800", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "That's nice.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, the yukata?\nI'm wearing it for today.\nWhat do you think?");
        Character_ChFace(1, 0, 10);
        Character_ChFace(1, 4, 1);
        Voice_PlayVoice("B0207000_G00900", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "It suits you well.\nNo, you look good in it.\nOh, nothing...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Giggles* ｛Wakaouji＊＊｝\nseems to like it!)");
        Parameter_AddCh1Param(7, 61, 5);
        Parameter_AddCh1Param(7, 60, 1);
        Parameter_AddCh1Param(7, 62, #2);
        }
    else if (Date_GetDateOption(3) == 14){
        Character_ChFace(1, 0, 3);
        Character_ChFace(1, 2, 2);
        Character_ChFace(1, 3, 0);
        Voice_PlayVoice("B0207000_G02800", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "It's that outfit, again.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh? You mean this outfit?");
        Character_ChFace(1, 0, 3);
        Character_BlinkStart(7, 2, (#1), 2);
        Voice_PlayVoice("B0207000_G02900", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "The same one you wore the other\nday...\nI see... A trend. It's a trend.\nEven Sensei can tell.\nIt's fashion, right?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Damn it! He did remember it...)");
        Parameter_AddCh1Param(7, 61, #1);
        Parameter_AddCh1Param(7, 60, #1);
        Parameter_AddCh1Param(7, 62, 2);
        }
    else if (Date_GetDateOption(3) == 8){
        Character_ChFace(1, 0, 3);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0207000_G01700", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Art.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm, ｛Wakaouji＊＊｝?");
        Character_ChFace(1, 2, 1);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0207000_G01800", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "That outfit is art.\nEven Sensei can tell.\nYou thought he wouldn't realize it,\ndidn't you?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh, I should have given it more\nthought...)");
        Parameter_AddCh1Param(7, 61, #1);
        Parameter_AddCh1Param(7, 60, #1);
        Parameter_AddCh1Param(7, 62, 2);
        }
    else if (Date_GetDateOption(3) == 6){
        Character_ChFace(1, 0, 3);
        Character_ChFace(1, 2, 2);
        Character_ChFace(1, 3, 0);
        Voice_PlayVoice("", 7, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes?");
        Character_ChFace(1, 2, 2);
        Character_BlinkStart(7, 2, (#1), 2);
        Character_ChFace(1, 3, 0);
        Voice_PlayVoice("B0207000_G01200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Do you not feel warm in that outfit?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I might have overdressed.)");
        Parameter_AddCh1Param(7, 61, #1);
        Parameter_AddCh1Param(7, 60, #1);
        Parameter_AddCh1Param(7, 62, 2);
        }
    else if (Date_GetDateOption(3) == 7){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0207000_G01300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "You're very healthy, aren't you?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes?");
        Character_ChFace(1, 0, 10);
        Character_ChFace(1, 3, 5);
        Voice_PlayVoice("B0207000_G01400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "It looks like you're wearing really\nthick clothes...\nOh, probably a trend. Am I right?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I might have overdressed.)");
        Parameter_AddCh1Param(7, 61, #1);
        Parameter_AddCh1Param(7, 60, #1);
        Parameter_AddCh1Param(7, 62, 2);
        }
    else if (Date_GetDateOption(3) == 9){
        Character_ChFace(1, 0, 11);
        Character_ChFace(1, 7, 1);
        Voice_PlayVoice("B0207000_G01500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "............");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm, ｛Wakaouji＊＊｝?");
        Character_ChFace(1, 7, 0);
        Character_ChFace(1, 2, 2);
        Character_ChFace(1, 3, 4);
        Voice_PlayVoice("B0207000_G01600", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I cannot follow the sense of you\nstudents, sometimes....\nOr senses of the ones who aren't\nstudents.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh...\nI should have thought about\ncoordination more...)");
        Parameter_AddCh1Param(7, 61, #1);
        Parameter_AddCh1Param(7, 60, #1);
        Parameter_AddCh1Param(7, 62, 2);
        }
    else if (Date_GetDateOption(3) == 5){
        Character_ChFace(1, 0, 3);
        Character_ChFace(1, 3, 2);
        Voice_PlayVoice("B0207000_G01000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "That outfit...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes?\nDoes this outfit not look good on\nme?");
        Character_ChFace(1, 2, 0);
        Character_BlinkStart(7, 3, (#1), 2);
        Character_ChFace(1, 3, 1);
        Voice_PlayVoice("B0207000_G01100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I'm not sure if you look good or\nnot.\nHowever, I kind of feel it isn't\nlike you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Wakaouji＊＊｝ doesn't seem\nto like this outfit....\nOther outfits could have been\nbetter.)");
        Parameter_AddCh1Param(7, 61, #1);
        Parameter_AddCh1Param(7, 60, 0);
        Parameter_AddCh1Param(7, 62, 1);
        }
    else if (Date_GetDateOption(3) == 1){
        Character_ChFace(1, 0, 3);
        Character_ChFace(1, 3, 2);
        Voice_PlayVoice("B0207000_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "That outfit...");
        Message_Who(0);
        Message_MsgDisp("主人公", "... Umm, what's wrong?");
        Character_ChFace(1, 0, 10);
        Character_BlinkStart(7, 2, (#1), 2);
        Voice_PlayVoice("B0207000_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "It's really nice.\nIt suits you very well. However...");
        Message_Who(0);
        Message_MsgDisp("主人公", "...?");
        Character_ChFace(1, 0, 9);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0207000_G00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "You shouldn't trust Sensei's taste.\nSensei doesn't have much\nconfidence....\nActually, it's a secret.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It was a secret...\nBut ｛Wakaouji＊＊｝ seems to\nlike this outfit.)");
        Parameter_AddCh1Param(7, 61, 2);
        Parameter_AddCh1Param(7, 60, 1);
        Parameter_AddCh1Param(7, 62, #2);
        }
    else if (Date_GetDateOption(3) == 2){
        Character_ChFace(1, 0, 3);
        Character_ChFace(1, 3, 2);
        Voice_PlayVoice("B0207000_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "That outfit...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh? Does it suit me?");
        Character_BlinkStart(7, 3, (#1), 2);
        Character_ChFace(1, 3, 5);
        Voice_PlayVoice("B0207000_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "It suits you.\nYou look great in that kind of\noutfit.\nOr how should I put it, like...");
        Message_Who(0);
        Message_MsgDisp("主人公", "...?");
        Character_BlinkStart(7, 0, (#1), 2);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0207000_G00500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I can't say anything except you look\nnice.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(...\nAnyway, ｛Wakaouji＊＊｝ seems\nto like this outfit a little.)");
        Parameter_AddCh1Param(7, 61, 1);
        Parameter_AddCh1Param(7, 60, 0);
        Parameter_AddCh1Param(7, 62, #1);
        }
    else if (Date_GetDateOption(3) == 3){
        Character_ChFace(1, 0, 3);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0207000_G00600", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "That's a nice color.");
        Message_Who(0);
        Message_MsgDisp("主人公", "You mean this color?");
        Voice_PlayVoice("B0207000_G00700", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Yes.\nIt's fine as long as my eyes don't\nget tired.\nThat's the most important thing.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Wakaouji＊＊｝ likes pink.)");
        Parameter_AddCh1Param(7, 61, 1);
        Parameter_AddCh1Param(7, 60, 0);
        Parameter_AddCh1Param(7, 62, #1);
        }
    else if (Date_GetDateOption(3) == 10){
        Character_ChFace(1, 0, 3);
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0207000_G01900", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Lately, I've seen a lot of people\nwearing that outfit.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, this ｛流行服名｝?");
        Character_BlinkStart(7, 3, (#1), 2);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0207000_G02000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "It's the latest fashion.\nYou thought I wouldn't know, right?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's a good thing I chose this\noutfit!)");
        Parameter_AddCh1Param(7, 61, 1);
        Parameter_AddCh1Param(7, 60, 0);
        Parameter_AddCh1Param(7, 62, #1);
        }
    else if (Date_GetDateOption(3) == 11){
        Character_ChFace(1, 0, 3);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0207000_G02100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I've seen a lot of that color\nlately.");
        Message_Who(0);
        Message_MsgDisp("主人公", "This color?");
        Character_BlinkStart(7, 3, (#1), 2);
        Voice_PlayVoice("B0207000_G02200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "It's a trend. Sensei can tell.\nDid you think he wouldn't know?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Great, he seems to like it!)");
        Parameter_AddCh1Param(7, 61, 1);
        Parameter_AddCh1Param(7, 60, 0);
        Parameter_AddCh1Param(7, 62, #1);
        }
    else if (Date_GetDateOption(3) == 12){
        Character_ChFace(1, 0, 3);
        Character_ChFace(1, 3, 2);
        Voice_PlayVoice("B0207000_G02300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "That's...");
        Message_Who(0);
        Message_MsgDisp("主人公", "This ｛流行アクセサリ名｝?");
        Character_ChFace(1, 0, 11);
        Voice_PlayVoice("B0207000_G02400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Lately, I've seen a lot.. Oh!\nIt's in fashion.\nOf course, it's in fashion.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Good thing I've checked the\ntrends!)");
        Parameter_AddCh1Param(7, 61, 1);
        Parameter_AddCh1Param(7, 60, 0);
        Parameter_AddCh1Param(7, 62, #1);
        }
    else if (Date_GetDateOption(3) == 0){
        }
    Message_ResumeSkinship();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
