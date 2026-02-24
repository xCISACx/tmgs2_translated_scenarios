section "b04_m7_052"{
    Character_Chara_GS2(7, "M7_06F", 0, 1, 0);
    Character_ChFace(0, 2, 4);
    Character_ChFace(0, 3, 3);
    Background_Bg_GS2("BG_WF521_LI_2", #1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0407052_G00000", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "... It was beautiful.\nIf I knew it would be so good, I\nwould have come to see it ahead of\ntime.");
    Message_MsgSel("Is this your first fireworks display?", "I've seen it several times.", "Because you weren't able to ask me...");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(7, "M7_06F", 0, 1, 1, 33);
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 0);
        Message_PauseSkinship();
        Voice_PlayVoice("B0407052_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Is that right?\nI have always heard the sounds.\nI am determined this year.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        case 1:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(7, 3, (#1), 1);
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("B0407052_G00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Do you really need to boast so\nmuch...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        case 2:
        Date_InData_Date(124, 5);
        Date_InData_Date(321, 1);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("B0407052_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Oh really...\nI hesitated because I was a teacher.\nI'm sorry.");
        Message_Who(0);
        Message_MsgDisp("主人公", "That is not your fault, Sensei...");
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("B0407052_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Thank you.... You are kind.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Wakaouji＊＊｝...");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("B0407052_G00500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "From the start, I had intended to\nmake this the final Fireworks\nFestival, but I am a little\ndisappointed now.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It was supposed to be the last\nright from the start...?)");
        break ;
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_GlobalWork(5, 0, 1);
    }
