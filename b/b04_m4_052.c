section "b04_m4_052"{
    if (System_GlobalWork(1, 1) == 0){
        Character_Chara_GS2(4, "M4_D?F", 0, 1, 0);
        Character_ChFace(0, 0, 10);
        Background_Bg_GS2("BG_WF521_LI_2", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404052_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Wow, very edgy!\nThis is the best seat!");
        Message_MsgSel("The night sky is the fireworks' canvas!", "What's inside of the fireworks?", "It was noisy.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_D?F", 0, 1, 1, 33);
            Character_BlinkStart(4, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404052_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It's amazing, really...\nYou say some nice things sometimes.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_D?F", 0, 1, 1, 33);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404052_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Oh, I know!\nIt's tightly stuffed with gunpowder\nand...\nAnyway, it's great.\nAn artisan's skill.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404052_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "...\nJust watch the fireworks rather than\nfocusing on its noise....\nIt's a chance, don't blow it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (System_GlobalWork(1, 1) == 1){
        Character_Chara_GS2(4, "M4_D?F", 0, 1, 0);
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(4, 3, (#1));
        Background_Bg_GS2("BG_WF521_LI_2", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404052_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "With the sound included, it's\ndefinitely fireworks!");
        Message_MsgSel("The effect of a deep bass.", "I need earplugs.", "Varied sounds would have been better.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_D?F", 0, 1, 1, 33);
            Character_BlinkStart(4, 0, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404052_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Indeed, you said it!\nYeah, like the bass drum, a low\nfrequency is good.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_BlinkStart(4, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404052_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Do you mean it's not necessary to\ncome and see?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_D?F", 0, 1, 1, 33);
            Character_BlinkStart(4, 0, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404052_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "That sounds fun!\nThe guitar and the trumpet sounds...\nI wonder if they seriously can't do\nthat.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (System_GlobalWork(1, 1) == 2){
        Character_Chara_GS2(4, "M4_D?F", 0, 1, 0);
        Character_ChFace(0, 2, 5);
        Character_BlinkStart(4, 2, (#1));
        Background_Bg_GS2("BG_WF521_LI_2", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404052_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "As the firework scatters\nmomentarily, you'll feel a bit\nlonely and sad...");
        Message_MsgSel("Both of our memories are forever.", "It makes the moment beautiful.", "You feel as if Summer does have a climax.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404052_D00900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Pfft... Ah, sorry!\nIt was a lousy line. I'm sorry...!!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0404052_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Forever, you mean....\nWhy are you talking as if \"We're not\ngoing to meet, again\"?");
                Character_ChFace(0, 0, 6);
                Character_ChFace(0, 4, 0);
                Voice_PlayVoice("B0404052_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "We can come again next year.");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0404052_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Oh... I see.\nWe're both graduates next Summer...");
                Message_Who(0);
                Message_MsgDisp("主人公", ".........");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404052_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "But, anyway!\nLet's make lots and lots of\nmemories.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404052_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nLet's　make memories together again\nnext year.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Yeah!\nLet's come again to the fireworks.");
                }
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_D?F", 0, 1, 1, 33);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(4, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404052_D01500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Moment of aesthetics.\nI guess so, a night of live would\nalso leave so much within me.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_D?F", 0, 1, 1, 33);
            Character_ChFace(1, 2, 4);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404052_D01600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I see, a climax.... Oh no!\nHey, are you done with your\nhomework?");
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
    System_GlobalWork(5, 0, 1);
    }
