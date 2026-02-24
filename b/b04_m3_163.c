section "b04_m3_163"{
    int var0 = Date_GetDateOption(2, 47);
    if (var0 == 0){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE430_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403163_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "This is my first time trying a music\ngame....\nThere are some songs playing with a\ngood rhythm.");
        Message_MsgSel("Music games are fun!", "Can I take pictures of you dancing?", "Can you even play, ｛Hikami＊＊｝?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 0, 8);
            Character_BlinkStart(3, 2, (#1), 1);
            Voice_PlayVoice("B0403163_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Didn't I say it was my first time?\nEven if you want me to agree, I do\nnot know much about this game.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0403163_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "As if that is okay!\nIt is embarrassing! ...\nDon't take any pictures, just look\nafter the camera for me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403163_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... I will not know unless I try.\nWill you teach me how to play?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(3, 3, (#1));
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_NE430_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403163_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "......... *sigh*.\nAs expected, I am sweating.");
        Message_MsgSel("You're a hard worker, ｛Hikami＊＊｝!", "Don't force yourself, ｛Hikami＊＊｝.", "You're not suited to sweating.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(3, 0, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403163_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Yes, I do my best in my own way.\nI was saved many times by your\nadvice.");
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
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403163_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "No, I am already forcing myself.\nLet us rest for a bit.");
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
            Voice_PlayVoice("B0403163_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nAnd the one who made me do such a\nthing was you, and nobody else.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE430_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403163_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nI have finally gotten used to it.\nI have gotten a little better,\nright?");
        Message_MsgSel("Yeah, you were cool▼", "Yeah, you were funny▼", "As expected, you're not cut out for it.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 9);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403163_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Really...?\nEven though I know you are\nflattering me, I feel good.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0403163_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", ".........\nThose are not words of praise,\nright?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0403163_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "......... Let us leave.\nIt does not seem like I will be\ncoming here again.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("B0403163_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "*sigh*.........\nSo even you came out and said it.\nWas I that terrible?");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Hikami＊＊｝...");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403163_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... I see. You are an honest person.\nI know that from watching you play.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh...?");
                Character_BlinkStart(3, 0, (#1));
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403163_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nWhen you make a wrong step, don't\nyou get a worried face?");
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("B0403163_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nIf it is game over, it would be as\ndepressing as a puppy soaked in the\nrain.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... R-Really?");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Character_BlinkStart(3, 0, (#1));
                Voice_PlayVoice("B0403163_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Yeah, that is how it seems to me.\nWell, your honesty...\nis also what is good about you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hikami＊＊｝...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
