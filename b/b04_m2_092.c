section "b04_m2_092"{
    Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
    Character_ChFace(0, 2, 2);
    Character_BlinkStart(2, 3, (#1));
    Character_ChFace(0, 3, 0);
    Background_Bg_GS2("BG_FP420_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_FP_420_000", 127, 40);
    Voice_PlayVoice("B0402092_B00000", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "That was tense.\nYou were caught up in a daze, and it\nlooked like you were going to bump\ninto the things on display...");
    Message_MsgSel("It's really pretty, I was fascinated.", "Because I saw a reflection of my face▼", "It's fine. I was paying attention!");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
        Character_ChFace(1, 0, 10);
        Character_BlinkStart(2, 2, (#1), 2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0402092_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Yeah.\nThe craftsmanship is really\nelaborate.\nI understand the feeling of wanting\nto see it from up close.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
        Message_SkinshipSet(0);
        break ;
        case 1:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
        Character_ChFace(1, 0, 3);
        Message_PauseSkinship();
        Voice_PlayVoice("B0402092_B00200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "...\nI'll tell you if there's something\nweird stuck on your face, so don't\nbe so bothered by it.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        case 2:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 0, 8);
        Character_BlinkStart(2, 2, (#1), 1);
        Voice_PlayVoice("B0402092_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Don't yell so loudly.\nThe stuff on display will break.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
