section "b04_m7_093"{
    Character_Chara_GS2(7, "M7_17F", 0, 1, 0);
    Character_ChFace(0, 2, 4);
    Character_BlinkStart(7, 2, (#1));
    Character_ChFace(0, 3, 2);
    Background_Bg_GS2("BG_FP430_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_FP_430_000", 127, 40);
    Voice_PlayVoice("B0407093_G00000", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Hey, that corner!\nChildren must not run around there.");
    Message_MsgSel("This is a very interesting thing!", "Let's go somewhere that isn't crowded.", "Are you saying we should leave?");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 4);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
        Character_ChFace(1, 2, 4);
        Character_BlinkStart(7, 2, (#1), 2);
        Character_ChFace(1, 3, 3);
        Message_PauseSkinship();
        Voice_PlayVoice("B0407093_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Yes, because children are honest.\nWe must see this corner!");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yes! I made a perfect impression!!)");
        Message_SkinshipSet(0);
        break ;
        case 1:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
        Character_ChFace(1, 2, 3);
        Character_BlinkStart(7, 2, (#1), 2);
        Character_ChFace(1, 3, 0);
        Message_PauseSkinship();
        Voice_PlayVoice("B0407093_G00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "That's also true, but I also feel\nlike I want to see it.\nMaybe I'll come back here later.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        case 2:
        Date_InData_Date(124, 0);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("B0407093_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I cannot do that.\nI have to show you these things\nuntil I am content.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Argh～ Damn I'm such an idiot!\nI made the worst impression～)");
        break ;
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
