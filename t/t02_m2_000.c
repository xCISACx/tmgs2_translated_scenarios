section "t02_m2_000"{
    System_GlobalWork(3, 0, 0);
    int var0;
    Message_TextSpeed(8);
    Message_DispMsg(1);
    if (Parameter_GetCh1Param(2, 559) >= 6){
        Voice_PlayVoice("T9902000_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("？？？", "... You're finally here.");
        Character_Chara_GS2(2, "M2_01F", 0);
        Screen_WipeIn(3);
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Shiba＊＊｝!\nWhy are you here...?");
        Voice_PlayVoice("T9902000_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Yeah. I was waiting for you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "For me?");
        Character_Chara_GS2(2, "NON");
        }
    Message_CloseMsg();
    Message_MessageWindow(1);
    Message_Text_Color(16);
    Still_Pair_Event("EV_02_17", "EV_99_00", 0, 0);
    Screen_WipeIn(3);
    Music_PlayBGM(0, "MN_C_02_090_D00", 127, 40);
    Message_TextSpeed(8);
    Message_DispMsg(1);
    if (Parameter_GetCh1Param(2, 559) < 6){
        Voice_PlayVoice("", 2, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Shiba＊＊｝...!");
        }
    Voice_PlayVoice("T0202000_B00000", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "These three years...\nwent by quickly.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah...");
    Still_StillFace(0, 6, 1);
    Voice_PlayVoice("T0202000_B00100", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "Since I met you...\nit went by quickly.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Eh...?");
    Still_StillFace(0, 6, 0);
    Voice_PlayVoice("T0202000_B00200", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "Until I met you...\nTime had stopped for me.");
    Still_StillFace(0, 0, 1);
    Voice_PlayVoice("T0202000_B00300", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "I kept dwelling on the past, so I\nstopped time with my own hands.");
    Voice_PlayVoice("T0202000_B00400", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "I...\nI thought that it was the only way\nto apologize to those guys in the\nBaseball Club.");
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Shiba＊＊｝...");
    Still_StillFace(0, 0, 0);
    Voice_PlayVoice("T0202000_B00500", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "But...\nyou were the one who made me realize\nthat I was mistaken.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Me...?");
    Voice_PlayVoice("T0202000_B00600", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "... Yeah.");
    Still_Pair_Event("EV_02_18", "EV_99_00", 1, 1);
    if (Parameter_GetCh1Param(2, 25) == 1){
        Voice_PlayVoice("T0202000_B00700", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "You were the one who made me realize\nthat I could hold a bat again.");
        }
    else {
        Voice_PlayVoice("T0202000_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "...\nEven though I realized that, I did\nnothing about it.\nBut you kept pushing me on to the\nvery end...");
        }
    Message_Who(0);
    Message_MsgDisp("主人公", "I didn't...");
    Still_Pair_Event("EV_02_17", "EV_99_00", 0, 0);
    System_Wait(60);
    Still_StillFace(0, 0, 2);
    Voice_PlayVoice("T0202000_B00900", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "...\nYou're gonna say that you had no\nintention to do that, right?");
    Message_Who(0);
    Message_MsgDisp("主人公", "... Yeah.");
    Still_StillFace(0, 0, 4);
    Still_StillFace(0, 6, 1);
    Voice_PlayVoice("T0202000_B01000", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "That was my... salvation.");
    Voice_PlayVoice("T0202000_B01100", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "You supported me like it was\nnatural, without any ulterior\nmotives...");
    Still_StillFace(0, 0, 1);
    Still_StillFace(0, 6, 0);
    Voice_PlayVoice("T0202000_B01200", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "I realize that I need you.");
    Voice_PlayVoice("", 2, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "｛主人公｝.");
    Still_StillFace(0, 0, 0);
    Voice_PlayVoice("T0202000_B01300", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "............ You.");
    Still_Pair_Event("EV_99_00", "EV_02_17", 0, 0);
    Voice_PlayVoice("T0202000_B01400", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "I... like you.");
    Message_TextSpeed(#1);
    System_Wait(#60);
    Message_MsgSel("Me too...", "(Answer with a kiss.)", "... I'm sorry.");
    switch (Message_TextSelect()){
        case 0:
        var0 = 0;
        break ;
        case 1:
        var0 = 2;
        break ;
        case 2:
        var0 = 1;
        break ;
        }
    if (var0 == 2){
        Still_Approach(2, #1, 0, 0, 0, 0);
        if (System_GlobalWork(9, 1) == 1){
            var0 = 3;
            }
        }
    Message_TextSpeed(8);
    if (var0 != 1){
        Message_TextSpeed(8);
        Still_ApproachEnd();
        if (var0 == 2){
            Still_StillFace(0, 0, 1);
            Voice_PlayVoice("T9902000_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "A kiss...");
            Still_StillFace(0, 0, 0);
            Voice_PlayVoice("T9902000_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nIs it okay for me to assume that you\nfeel the same way?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, it is. That's why I did it.");
            if (Parameter_GetPl1Param(312) == 2){
                Parameter_InCh1Param(2, 301, 2);
                Parameter_InCh1Param(2, 305, 2);
                }
            else {
                Parameter_InCh1Param(2, 300, 2);
                Parameter_InCh1Param(2, 305, 1);
                }
            }
        else if (var0 == 3){
            Still_StillFace(0, 0, 5);
            Voice_PlayVoice("T9902000_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "H-hey... What?");
            Message_Who(0);
            Message_MsgDisp("主人公", "I had always planned to communicate\nmy feelings this way.");
            Still_StillFace(0, 0, 0);
            Voice_PlayVoice("T9902000_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Al...ways?");
            if (Parameter_GetPl1Param(312) == 2){
                Parameter_InCh1Param(2, 301, 3);
                Parameter_InCh1Param(2, 305, 2);
                }
            else {
                Parameter_InCh1Param(2, 300, 3);
                Parameter_InCh1Param(2, 305, 1);
                }
            }
        else {
            if (Parameter_GetPl1Param(312) == 2){
                Parameter_InCh1Param(2, 301, 1);
                Parameter_InCh1Param(2, 305, 2);
                }
            else {
                Parameter_InCh1Param(2, 300, 1);
                Parameter_InCh1Param(2, 305, 1);
                }
            }
        Still_StillFace(0, 6, 2);
        Voice_PlayVoice("T0202000_B01600", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", ".........");
        Message_Who(0);
        Message_MsgDisp("主人公", "... ｛Shiba＊＊｝?");
        Still_StillFace(0, 0, 0);
        Voice_PlayVoice("T0202000_B01700", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... What did you just say?");
        if (var0 == 0){
            Message_Who(0);
            Message_MsgDisp("主人公", "...\nI said that I like you too,\n｛Shiba＊＊｝...");
            }
        Still_StillFace(0, 0, 3);
        Still_StillFace(0, 4, 1);
        Voice_PlayVoice("T0202000_B01800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Just as I thought, this feels great!");
        Message_Who(0);
        Message_MsgDisp("主人公", "!!!");
        Still_StillFace(0, 6, 1);
        Voice_PlayVoice("T0202000_B01900", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Sorry. After hearing that...\nMy mind went completely blank.");
        Still_StillFace(0, 6, 2);
        Voice_PlayVoice("T0202000_B02000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "...\nI don't even know what kinda face I\nshould be making, too...");
        if (var0 != 0){
            Message_Who(0);
            Message_MsgDisp("主人公", "...\nYou can't call me slow anymore then,\ncan you, ｛Shiba＊＊｝?");
            Still_StillFace(0, 0, 2);
            Voice_PlayVoice("T9902000_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I wonder....\nYou have no idea what I always think\nabout, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "What you always think about?");
            Still_StillFace(0, 0, 4);
            Voice_PlayVoice("T9902000_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah.\nBecause of that, I didn't notice\nyour feelings....\nDo you wanna know what I think\nabout?");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Yeah. Will you tell me?");
            Voice_PlayVoice("T9902000_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah. Close your eyes...");
            }
        else {
            if (Parameter_GetPl1Param(312) == 2){
                Voice_PlayVoice("T0202000_B02100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Just like you did at that time.");
                Message_Who(0);
                Message_MsgDisp("主人公", "That time?");
                Still_StillFace(0, 0, 2);
                Still_StillFace(0, 4, 0);
                Still_StillFace(0, 6, 2);
                Voice_PlayVoice("T0202000_B02200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... The hurdle.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah... You mean that kiss...?");
                Still_StillFace(0, 4, 0);
                Still_StillFace(0, 6, 0);
                Voice_PlayVoice("T0202000_B02300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Yeah.\nI don't know what picture you had in\nyour mind.");
                Voice_PlayVoice("T0202000_B02400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Because I was quite shocked, I don't\nremember what I said.");
                Still_StillFace(0, 0, 0);
                Still_StillFace(0, 4, 0);
                Still_StillFace(0, 6, 1);
                Voice_PlayVoice("T0202000_B02500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nActually, all I remember is the\nfeeling...");
                Parameter_InCh1Param(2, 305, 2);
                }
            else {
                Parameter_InCh1Param(2, 305, 1);
                }
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Still_StillFace(0, 0, 4);
            Still_StillFace(0, 4, 0);
            Still_StillFace(0, 6, 1);
            Voice_PlayVoice("T0202000_B02600", 2, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Nothing.......\n｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "What?");
            Still_StillFace(0, 4, 0);
            Still_StillFace(0, 0, 4);
            Still_StillFace(0, 6, 0);
            Voice_PlayVoice("T0202000_B02700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "From now on...\nLet's walk together, hand in hand.");
            Voice_PlayVoice("T0202000_B02800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I won't let go. I'll never let go...");
            }
        if (Parameter_GetPl1Param(312) == 2){
            if (Parameter_GetCh1Param(2, 25) == 1){
                Parameter_InCh1Param(2, 304, 2);
                }
            else {
                Parameter_InCh1Param(2, 304, 1);
                }
            }
        else if (Parameter_GetPl1Param(312) != 2){
            if (Parameter_GetCh1Param(2, 25) == 1){
                Parameter_InCh1Param(2, 303, 2);
                }
            else {
                Parameter_InCh1Param(2, 303, 1);
                }
            }
        if (Parameter_GetPl1Param(312) == 2){
            Parameter_InCh1Param(2, 307, 1);
            }
        else {
            Parameter_InCh1Param(2, 306, 1);
            }
        if (Parameter_GetCh1Param(2, 559) >= 6){
            if (Parameter_GetPl1Param(312) == 2){
                Parameter_InCh1Param(2, 307, 2);
                }
            else {
                Parameter_InCh1Param(2, 306, 2);
                }
            }
        Message_CloseMsg();
        Screen_WipeOut(2);
        Music_StopBGM(0, 40);
        Still_Event("EV_02_19", #1, 1, 120);
        Screen_WipeIn(2);
        System_Wait(120);
        Still_Event("EV_02_19", #1, 0, 120, 0, 1);
        System_Wait(120);
        Screen_WipeOut(3);
        System_GlobalWork(3, 0, 20);
        }
    else {
        Message_TextSpeed(8);
        Still_ApproachEnd();
        Music_StopBGM(0, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "I'm sorry...");
        Still_StillFace(0, 0, 5);
        Voice_PlayVoice("T0202000_B02900", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... I see.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm, ｛Shiba＊＊｝...");
        Still_StillFace(0, 0, 1);
        Music_PlayBGM(0, "MN_C_02_001_D00", 127, 40);
        Voice_PlayVoice("T0202000_B03000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Sorry....\nI didn't say it to make you make\nthat face.");
        Voice_PlayVoice("T0202000_B03100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "So I don't want you to think that\nyou did something wrong.");
        Still_StillFace(0, 0, 4);
        Voice_PlayVoice("T0202000_B03200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "You were the one who made time move\nfor me again.\nThat is fine by me.");
        Still_StillFace(0, 0, 0);
        Voice_PlayVoice("T0202000_B03300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Just that...\nmakes me feel like it was worth\ncoming here...\nto Hanegasaki Academy.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Shiba＊＊｝...");
        Still_StillFace(0, 0, 4);
        Voice_PlayVoice("T0202000_B03400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "...\nI'm going to be aiming higher from\nnow on.");
        Still_StillFace(0, 6, 1);
        Voice_PlayVoice("T0202000_B03500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "So that all your support won't go to\nwaste....\nI'll make sure of it.");
        Message_Who(0);
        Message_MsgDisp("主人公", "... Okay.");
        Still_StillFace(0, 6, 2);
        Voice_PlayVoice("T0202000_B03600", #1, "T0202000_B03601");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Okay. I'll see you later.");
        Music_StopBGM(0, 60);
        Message_CloseMsg();
        Screen_WipeOut(3);
        System_GlobalWork(0, 2, 1);
        System_GlobalWork(3, 0, 21);
        }
    Screen_ClearScreen();
    Message_TextSpeed(#1);
    Parameter_AddCh1Param(2, 86, 1);
    Message_CloseMsg();
    Message_MessageWindow(1);
    Message_Text_Color(1);
    }
