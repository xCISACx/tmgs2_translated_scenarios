section "z62_m7_000"{
    Character_Chara_GS2(7, "M7_01F", 0);
    Background_Bg_GS2("BG_SC350_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetPl1Param(24) == 0){
        if (Parameter_ChkPlayer(9, 0) == 0){
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("Z6207000_G00000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "You'll have to enter the passing\nrange to be able to go to a\ntop-rated university.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, I'll study hard for the\nexam!)");
            }
        else if (Parameter_ChkPlayer(9, 1) == 0){
            Voice_PlayVoice("Z6207000_G00100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "You'll have to enter the passing\nrange to be able to go to a\nsecond-rate university.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, I'll do my best to study for\nthis exam!)");
            }
        else if (Parameter_ChkPlayer(9, 2) == 0){
            Voice_PlayVoice("Z6207000_G00200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "You'll have to enter the passing\nrange to be able to go to a\nthird-rate university.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, I'll do my best to study for\nthis exam!)");
            }
        }
    else {
        if (Parameter_ChkPlayer(9, 0) == 0){
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("Z6207000_G00300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "It is possible to find a job at a\nfirst-rate company with your current\nabilities.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, I'll aim high and do my best\nfor this career goal!)");
            }
        else if (Parameter_ChkPlayer(9, 1) == 0){
            Voice_PlayVoice("Z6207000_G00400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "It is possible to find a job at a\nsecond-rate company with your\ncurrent abilities.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, I'll aim high and do my best\nfor this career goal!)");
            }
        else if (Parameter_ChkPlayer(9, 2) == 0){
            Voice_PlayVoice("Z6207000_G00500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "It is possible to find a job at a\nthird-rate company with your current\nabilities.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, I'll aim high and do my best\nfor this career goal!)");
            }
        }
    if (Parameter_ChkPlayer(9, 2) == 1){
        Voice_PlayVoice("Z6207000_G00600", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Though it is difficult, don't let\nthis dream be in vain.\nWith hard work, you will succeed.");
        if (Parameter_ChkPlayer(10, 2) == 0){
            Voice_PlayVoice("Z6207000_G00700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "With a little more \"knowledge\", you\nshall rise to the top.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I will do my best to study!)");
            }
        else if (Parameter_ChkPlayer(10, 2) == 1){
            Voice_PlayVoice("Z6207000_G00800", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "With a little more \"art\", you might\nmake good effort in that activity.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, I'll keep at drawing!)");
            }
        else if (Parameter_ChkPlayer(10, 2) == 2){
            Voice_PlayVoice("Z6207000_G00900", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "With a little more \"fashion\", you\nmay be able to attend to others in\nneed.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, I'll do my best at fashion!)");
            }
        else if (Parameter_ChkPlayer(10, 2) == 3){
            Voice_PlayVoice("Z6207000_G01000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "With a little more \"exercise\", you\ncan put effort into try to avoid\nexerting yourself.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, I'll build up more stamina in\nexercise!)");
            }
        else if (Parameter_ChkPlayer(10, 2) == 4){
            Voice_PlayVoice("Z6207000_G01100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "With a little more \"attention\", you\ncan improve and become skillful.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, I'll work part-time and hang\nout with my friends!)");
            }
        else if (Parameter_ChkPlayer(10, 2) == 5){
            Voice_PlayVoice("Z6207000_G01200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "It's hard to say...\nWith a little more \"charm\", you can\nrise higher...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, I will dress up more!)");
            }
        }
    if (Parameter_ChkPlayer(9, 2) == 2){
        Voice_PlayVoice("Z6207000_G01300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Well, it will be tough.\nYou had better considerably do your\nbest.");
        if (Parameter_ChkPlayer(10, 2) == 0){
            Voice_PlayVoice("Z6207000_G01400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "With more \"knowledge\", you will rise\nhigher.");
            }
        else if (Parameter_ChkPlayer(10, 2) == 1){
            Voice_PlayVoice("Z6207000_G01500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "With more \"art\", you will be able to\nput more effort into the activity.");
            }
        else if (Parameter_ChkPlayer(10, 2) == 2){
            Voice_PlayVoice("Z6207000_G01600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "With more \"fashion\", you may be able\nto attend to the needs of others.");
            }
        else if (Parameter_ChkPlayer(10, 2) == 3){
            Voice_PlayVoice("Z6207000_G01700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "With more \"exercise\", you can put\neffort into trying to avoid exerting\nyourself.");
            }
        else if (Parameter_ChkPlayer(10, 2) == 4){
            Voice_PlayVoice("Z6207000_G01800", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "With more \"attention\", you can\nimprove and become skillful.");
            }
        else if (Parameter_ChkPlayer(10, 2) == 5){
            Voice_PlayVoice("Z6207000_G01900", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "It's hard to say...\nWith more \"charm\", you can rise\nhigher...");
            }
        if (Parameter_ChkPlayer(11) == 1){
            Voice_PlayVoice("Z6207000_G02000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "These days, the first-rate\nuniversities are good, too.");
            }
        else if (Parameter_ChkPlayer(11) == 2){
            Voice_PlayVoice("Z6207000_G02100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Lately, the second-rate universities\nhave been good.");
            }
        else if (Parameter_ChkPlayer(11) == 3){
            Voice_PlayVoice("Z6207000_G02200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Third-rate universities are good\ntoo, these days.");
            }
        else if (Parameter_ChkPlayer(11) == 4){
            Voice_PlayVoice("Z6207000_G02300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "First-rate companies are good too,\nthese days.");
            }
        else if (Parameter_ChkPlayer(11) == 5){
            Voice_PlayVoice("Z6207000_G02400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "These days, second-rate companies\nare good, too.");
            }
        else if (Parameter_ChkPlayer(11) == 6){
            Voice_PlayVoice("Z6207000_G02500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Lately, third-rate companies are\ngood, too.");
            }
        else if (Parameter_ChkPlayer(11) == 7){
            Voice_PlayVoice("Z6207000_G02600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "The way things are going, you will\nbe unemployed.");
            }
        else if (Parameter_ChkPlayer(11) == 8){
            Voice_PlayVoice("Z6207000_G02700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Well...\nFor the time being, how about just\nbeing a part-time worker?");
            }
        else if (Parameter_ChkPlayer(11) == 9){
            Voice_PlayVoice("Z6207000_G02800", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Lately, going to vocational schools\nare good...");
            }
        else if (Parameter_ChkPlayer(11) == 10){
            Voice_PlayVoice("Z6207000_G02900", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Perhaps illustrators are cut out for\njobs, these days.");
            }
        else if (Parameter_ChkPlayer(11) == 11){
            Voice_PlayVoice("Z6207000_G03000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Work in the media is suitable as\nwell, these days.");
            }
        else if (Parameter_ChkPlayer(11) == 12){
            Voice_PlayVoice("Z6207000_G03100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Boldly aiming for athletics may be\ngood.");
            }
        else if (Parameter_ChkPlayer(11) == 13){
            Voice_PlayVoice("Z6207000_G03200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "How about nursing?\nI think it's fitting.\nYou are gentle.");
            }
        else if (Parameter_ChkPlayer(11) == 14){
            Voice_PlayVoice("Z6207000_G03300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "What about the entertainment world?\nThat may suit you.");
            }
        else {
            Voice_PlayVoice("Z6207000_G03400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Well... I know!\nIsn't the entertainment world good?\nIf it happens, don't be desperate!");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(7, 86, 1);
    }
