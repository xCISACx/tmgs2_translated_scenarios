section "b04_m3_092"{
    Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
    Character_ChFace(0, 2, 3);
    Character_ChFace(0, 3, 0);
    Background_Bg_GS2("BG_FP420_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_FP_420_000", 127, 40);
    Voice_PlayVoice("B0403092_C00000", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "Apparently, glass has been made\nsince 5000 years ago.\nIndustrial Arts that have a history\nare so refined.");
    Message_MsgSel("Ah～, I'm spellbound▼", "You need skill to make this kind of cut.", "Oopsie...");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0403092_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "If you get that caught up in the\natmosphere, you won't be able to\nobserve the finer details well.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        case 1:
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 3);
        Message_PauseSkinship();
        Voice_PlayVoice("B0403092_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Ah, right!\nTo engrave a pattern on such thin\nglass is no ordinary thing.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
        Message_SkinshipSet(0);
        break ;
        case 2:
        Date_InData_Date(124, 0);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 0, 11);
        Voice_PlayVoice("B0403092_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "You!\nIf by some chance you bumped into\nsome of these, you would destroy\nmankind's fortunes!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
        break ;
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
