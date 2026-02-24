section "b02_m2_000"{
    Message_PauseSkinship();
    if (Date_GetDateOption(3) == 13){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0202000_B02200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... That's...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, you noticed?\nIt's the present I received from\nyou, ｛Shiba＊＊｝.");
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 5);
        Voice_PlayVoice("B0202000_B02300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... I can tell by just looking.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Shiba＊＊｝ looks elated.\nI'm glad I wore it.)");
        Parameter_AddCh1Param(2, 61, 2);
        Parameter_AddCh1Param(2, 60, 1);
        Parameter_AddCh1Param(2, 62, #2);
        }
    else if ((Parameter_ChkPlayer(15) == 1) && (Date_Get_Date_Place2() == 5)){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0202000_B02600", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Yukata...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah! I wore one. How is it?");
        Voice_PlayVoice("B0202000_B02700", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", ".........");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Huh? I wonder how it is?)");
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0202000_B02800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Ah? Ah... yeah.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Shiba＊＊｝ is elated...\nit seems. Thank gosh!)");
        Parameter_AddCh1Param(2, 61, 5);
        Parameter_AddCh1Param(2, 60, 1);
        Parameter_AddCh1Param(2, 62, #2);
        }
    else if (Date_GetDateOption(3) == 14){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0202000_B02400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Hey. Those clothes...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh? What?");
        Character_ChFace(1, 2, 0);
        Character_BlinkStart(2, 2, (#1), 2);
        Character_ChFace(1, 3, 2);
        Voice_PlayVoice("B0202000_B02500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "You didn't notice, huh...\nIt's fine, it's nothing.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Crap, I wore the same clothes the\nlast time I met him!\nHow embarrassing...)");
        Parameter_AddCh1Param(2, 61, #1);
        Parameter_AddCh1Param(2, 60, #1);
        Parameter_AddCh1Param(2, 62, 2);
        }
    else if (Date_GetDateOption(3) == 8){
        Character_ChFace(1, 0, 3);
        Message_Who(0);
        Message_MsgDisp("主人公", "I wonder how these clothes look?");
        Character_ChFace(1, 2, 2);
        Character_BlinkStart(2, 3, (#1), 2);
        Character_ChFace(1, 3, 0);
        Voice_PlayVoice("B0202000_B01500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Completely terrible.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(.........\nI shouldn't have asked...)");
        Parameter_AddCh1Param(2, 61, #1);
        Parameter_AddCh1Param(2, 60, #1);
        Parameter_AddCh1Param(2, 62, 2);
        }
    else if (Date_GetDateOption(3) == 6){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0202000_B01000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... It's hot, isn't it.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Character_ChFace(1, 2, 4);
        Character_BlinkStart(2, 2, (#1), 2);
        Character_ChFace(1, 3, 2);
        Voice_PlayVoice("B0202000_B01100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "You're not hot?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Hmm...\nIt seems like the clothes I am\nwearing are a little too thick...)");
        Parameter_AddCh1Param(2, 61, #1);
        Parameter_AddCh1Param(2, 60, #1);
        Parameter_AddCh1Param(2, 62, 2);
        }
    else if (Date_GetDateOption(3) == 7){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0202000_B01200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... It's cold, isn't it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Character_ChFace(1, 2, 4);
        Character_BlinkStart(2, 2, (#1), 2);
        Character_ChFace(1, 3, 2);
        Voice_PlayVoice("B0202000_B01300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "You're not cold?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh...\nI should coordinate my clothes while\ntaking the season into account...)");
        Parameter_AddCh1Param(2, 61, #1);
        Parameter_AddCh1Param(2, 60, #1);
        Parameter_AddCh1Param(2, 62, 2);
        }
    else if (Date_GetDateOption(3) == 9){
        Character_ChFace(1, 0, 3);
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Shiba＊＊｝?\nWhat's the matter?");
        Character_ChFace(1, 2, 2);
        Character_BlinkStart(2, 3, (#1), 2);
        Character_ChFace(1, 3, 0);
        Voice_PlayVoice("B0202000_B01400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", ".........");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder if the combination of\nclothes I'm wearing is a little\nweird...)");
        Parameter_AddCh1Param(2, 61, #1);
        Parameter_AddCh1Param(2, 60, #1);
        Parameter_AddCh1Param(2, 62, 2);
        }
    else if (Date_GetDateOption(3) == 5){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0202000_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "...............");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh?\nAre my clothes somewhat weird,\n｛Shiba＊＊｝?");
        Character_ChFace(1, 2, 1);
        Character_ChFace(1, 3, 2);
        Voice_PlayVoice("B0202000_B00900", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Yeah.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh...\nI should have worn other clothes...)");
        Parameter_AddCh1Param(2, 61, #1);
        Parameter_AddCh1Param(2, 60, 0);
        Parameter_AddCh1Param(2, 62, 1);
        }
    else if (Date_GetDateOption(3) == 1){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0202000_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Those clothes...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh? Are they weird?");
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0202000_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "...\nI didn't say anything like that,\nright?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(He likes these clothes... perhaps?\nThank gosh!)");
        Parameter_AddCh1Param(2, 61, 2);
        Parameter_AddCh1Param(2, 60, 1);
        Parameter_AddCh1Param(2, 62, #2);
        }
    else if (Date_GetDateOption(3) == 2){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0202000_B00200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Those clothes...");
        Message_Who(0);
        Message_MsgDisp("主人公", "How are they?");
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0202000_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Aren't they fine?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It looks like ｛Shiba＊＊｝\nlikes these clothes.\nI'm glad...)");
        Parameter_AddCh1Param(2, 61, 1);
        Parameter_AddCh1Param(2, 60, 0);
        Parameter_AddCh1Param(2, 62, #1);
        }
    else if (Date_GetDateOption(3) == 3){
        Character_ChFace(1, 0, 3);
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 5);
        Voice_PlayVoice("B0202000_B00500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "That color suits you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh? This color?");
        Character_ChFace(1, 2, 5);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0202000_B00700", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "It suits you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(So ｛Shiba＊＊｝ likes\nblack...)");
        Parameter_AddCh1Param(2, 61, 1);
        Parameter_AddCh1Param(2, 60, 0);
        Parameter_AddCh1Param(2, 62, #1);
        }
    else if (Date_GetDateOption(3) == 10){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0202000_B01600", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Hm, that.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, you mean my\n｛流行服名｝?");
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 5);
        Voice_PlayVoice("B0202000_B01700", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "It's that latest trend, right?\nIt suits you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I'm happy, I was complimented!)");
        Parameter_AddCh1Param(2, 61, 1);
        Parameter_AddCh1Param(2, 60, 0);
        Parameter_AddCh1Param(2, 62, #1);
        }
    else if (Date_GetDateOption(3) == 11){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0202000_B01800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "I've been seeing that color lately.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, it looks like it's the latest\ntrend....\nIs it weird?");
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 5);
        Voice_PlayVoice("B0202000_B01900", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "You don't seem like you're out of\nplace.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It seems like ｛Shiba＊＊｝\nlikes this.)");
        Parameter_AddCh1Param(2, 61, 1);
        Parameter_AddCh1Param(2, 60, 0);
        Parameter_AddCh1Param(2, 62, #1);
        }
    else if (Date_GetDateOption(3) == 12){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0202000_B02000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... That.");
        Message_Who(0);
        Message_MsgDisp("主人公", "My ｛流行アクセサリ名｝?\nIt's the latest trend so I bought\nit.\nHow does it look?");
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 5);
        Voice_PlayVoice("B0202000_B02100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "It's not bad.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It seems like ｛Shiba＊＊｝\nlikes this.\nYay!)");
        Parameter_AddCh1Param(2, 61, 1);
        Parameter_AddCh1Param(2, 60, 0);
        Parameter_AddCh1Param(2, 62, #1);
        }
    else if (Date_GetDateOption(3) == 0){
        }
    Message_ResumeSkinship();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
