section "p85_m3_000"{
    int var0;
    Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_GetPl1Param(338) < 3){
            if (Parameter_bunka_jyu(0) == 1){
                Message_Who(0);
                Message_MsgDisp("主人公", "Good job, ｛Hikami＊＊｝.");
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("P7503000_C00000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Well, you too.\nYou operated wisely and did well.");
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("P7503000_C00100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "We are to review this activity at\nthe next meeting...\nWell, I do not believe there was\nanything needing a review.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, seems that way.");
                var0 = 0;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "Good job, ｛Hikami＊＊｝...");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("P7503000_C00200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Indeed. I am exhausted....\nWell, anyone can make a mistake.\nLearn from it and try harder next\nyear.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Okay.");
                var0 = 1;
                }
            }
        else {
            if (Parameter_bunka_jyu(0) == 1){
                Message_Who(0);
                Message_MsgDisp("主人公", "Good job, ｛Hikami＊＊｝.");
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("P7503000_C00300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Yes, to you, as well.\nYou were a good example for the\njuniors.\nI am proud to be a fellow scholar of\nyours.");
                Character_BlinkStart(3, 3, (#1));
                Voice_PlayVoice("P7503000_C00400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "It was a good thing there was no\ntrouble with the management....\nYou have made the last culture\nfestival memorable.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, true!");
                var0 = 0;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "Good job, ｛Hikami＊＊｝...");
                Character_ChFace(0, 0, 9);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("P7503000_C00500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Yes... Indeed, I am quite weary.");
                Character_BlinkStart(3, 3, (#1));
                Voice_PlayVoice("P7503000_C00600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Though it is the last culture\nfestival, mistakes continued　and you\nwere a bad example 　to the\njuniors....\nIt is regretful.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah...");
                var0 = 1;
                }
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_GetPl1Param(338) < 3){
            if (Parameter_bunka_jyu(0) == 1){
                Message_Who(0);
                Message_MsgDisp("主人公", "Good job, ｛Hikami＊＊｝.");
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("P7503000_C00700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "It ended so quickly.\nGood thing there were no huge\nproblems.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah!");
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("P7503000_C00800", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "You can manage it more smoothly next\nyear if you make the best use of\nthis experience.\nYou might get much more free time,\ntoo.");
                var0 = 0;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "Good job, ｛Hikami＊＊｝...");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(3, 3, (#1));
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("P7503000_C00900", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Yes... I am weary.\nNever thought you would make\ncontinuous mistakes.");
                Character_BlinkStart(3, 0, (#1));
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("P7503000_C01000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "We will evaluate this at the next\ncouncil meeting.\nWe will clearly point out the issues\nso next year will go much smoother.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah...");
                var0 = 1;
                }
            }
        else {
            if (Parameter_bunka_jyu(0) == 1){
                Message_Who(0);
                Message_MsgDisp("主人公", "Good job, ｛Hikami＊＊｝.");
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("P7503000_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Yes, to you, as well.\nAs expected on the last school year,\nyou really are intently looking\nafter the juniors.");
                Character_BlinkStart(3, 3, (#1));
                Voice_PlayVoice("P7503000_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I believe this will perfect one's\ncareer, since the management went\nwell....\nIt was a good culture festival.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, true!");
                var0 = 0;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "Good job, ｛Hikami＊＊｝...");
                Character_ChFace(0, 0, 9);
                Character_Chara_GS2(3, "M3_01F", 0);
                Voice_PlayVoice("P7503000_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Yes... Oh, it's you.\nI suppose it was tiring.");
                Character_BlinkStart(3, 3, (#1));
                Voice_PlayVoice("P7503000_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Though it is the last culture\nfestival, mistakes continued　and you\nwere a bad example 　to the\njuniors....It is unbearable.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah...");
                var0 = 1;
                }
            }
        }
    else {
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "Good job, ｛Hikami＊＊｝!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(3, 2, (#1));
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("", 3, "P7503000_C01500");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝.\nYou moved around more than others.\nI take my hat off to you ...\nGood job.");
            Message_Who(0);
            Message_MsgDisp("主人公", "No, you don't have to.");
            Character_BlinkStart(3, 0, (#1));
            Character_ChFace(0, 2, 5);
            Voice_PlayVoice("P7503000_C01600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "No, you did your best.\nYou guided the juniors very well.");
            Character_BlinkStart(3, 3, (#1));
            Voice_PlayVoice("P7503000_C01700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... The culture festival is retired.\nEven if we were to graduate,\nHanegesaki Academy's culture\nfestival will be fine.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hikami＊＊｝...");
            var0 = 0;
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Good job, ｛Hikami＊＊｝...");
            Character_ChFace(0, 0, 0);
            Character_BlinkStart(3, 2, (#1));
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("P7503000_C01800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yeah. Oh, it's you...");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(3, 3, (#1));
            Voice_PlayVoice("P7503000_C01900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "We executives, had a farewell event\nthis culture festival, right?\nYet... It was regrettable.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...");
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("P7503000_C02000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "This year's management was a pity.\nWe were bad examples for our\njuniors.\nThe both of us...");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P7503000_C02100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Make use of this reflection for your\nway of life in the future.\nAs the person who failed, think of\nthis distinction.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hikami＊＊｝...");
            var0 = 1;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    if (Parameter_GetPl1Param(338) == 1){
        if (Parameter_ChkSpEvent("D01", "M4", 0) == 1){
            System_Call_GS2("D01", "M4", 0);
            }
        }
    Background_Bg_GS2("BG_SC130_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetPl1Param(338) < 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "(This is how this year's culture\nfestival ended.)");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "(This is how my last high school\nculture festival ended.)");
        }
    Parameter_AddPl1Param(322, 1);
    switch (var0){
        case 0:
        Parameter_AddCh1Param(#1, 61, 2);
        Parameter_AddCh1Param(#1, 60, 4);
        Parameter_AddCh1Param(#1, 62, #4);
        break ;
        case 1:
        Parameter_AddCh1Param(#1, 61, 2);
        Parameter_AddCh1Param(#1, 60, #4);
        Parameter_AddCh1Param(#1, 62, 1);
        break ;
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(3, 86, 1);
    }
