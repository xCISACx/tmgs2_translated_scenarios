section "b03_m4_220"{
    Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
    Character_ChFace(0, 2, 4);
    Character_BlinkStart(4, 2, (#1));
    Character_ChFace(0, 3, 5);
    Background_Bg_GS2("BG_TR400_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0304220_D00000", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "As expected, it's huge...");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(4, "NON");
    Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
    Background_Bg_GS2("BG_TR410_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0304220_D00100", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "Where do you want to go?");
    Message_MsgSel("Let's see the exhibition corner.", "Let's go to the Castle Tower.");
    switch (Message_TextSelect()){
        case 0:
        Character_ChFace(1, 0, 10);
        Message_ResumeSkinship();
        Voice_PlayVoice("B0304220_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I like the castle. Sounds good～.\nLet's go.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M4", 221);
        break ;
        case 1:
        Character_ChFace(1, 3, 3);
        Message_ResumeSkinship();
        Voice_PlayVoice("B0304220_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "A view sounds good. Let's get going!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M4", 222);
        break ;
        }
    }
