section "b04_m3_162"{
    int var0 = Date_GetDateOption(2, 46);
    Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
    Background_Bg_GS2("BG_NE420_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        Voice_PlayVoice("B0403162_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "The sounds of the token corner is\nquite noisy.");
        Message_MsgSel("I'm excited!", "Alright, leave it to me!", "Let's get lots of candy.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403162_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes.\nIt is quite fascinating, as there is\na possibility that we can get even\nmore tokens.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403162_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nYou are brimming with confidence.\nShow me what you've got then.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(3, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0403162_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nAren't there any other prizes\nbesides sweet things?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0403162_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "If the next token is dropped in this\nposition, there is a 70% chance that\nmore tokens will fall...");
        Message_MsgSel("Do your best, ｛Hikami＊＊｝▼", "You even calculate in this game...", "What will you do with so many tokens?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403162_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, leave it to me.\nI will get many tokens for the both\nof us!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403162_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "There is nothing you learn than\ncannot be used in your daily life.\nThat is what I think.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0403162_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", ".........\nIt will be funds for the next game.\nI do not know of any other way to\nuse it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0403162_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "The amount of tokens we have has\nslowly decreased.\nWhat should we do...?");
        Message_MsgSel("Let's make a comeback with the next game!", "Ah～, our luck has abandoned us.", "Go for a change of pace?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403162_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... You are quite into this as well.\nAlright, let us aim big, with the\nnext game being the last.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0403162_C01000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nDidn't you lose the tokens because\nyou kept losing in each game?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0403162_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "We were going well in the beginning\ntoo.\nPerhaps we had mistaken how these\ngames work.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hmm, it's difficult...");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403162_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "With that in mind, we should give up\nnow.\nJust as you said, our luck has\nabandoned us.");
                Message_Who(0);
                Message_MsgDisp("主人公", "The goddess of fate is cruel...");
                Voice_PlayVoice("B0403162_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Right. Well, even if you say that...");
                Message_Who(0);
                Message_MsgDisp("主人公", "...?");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403162_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "If the goddess n-next to me is\nsmiling, I would not mind if the\ngoddess of fate turned away from\nme...");
                Message_Who(0);
                Message_MsgDisp("主人公", "The goddess next to you...?\nAh, you mean that white goddess on\ntop of that gaming machine?");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403162_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Ah, no, not that.... Haha.\nIt seems like I cannot communicate\nwith the thick-headed goddess no\nmatter what.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hikami＊＊｝...?)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403162_C01600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nTo try to change the pace while at a\nplace we came to for a change of\npace is strange, but let us do that.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
