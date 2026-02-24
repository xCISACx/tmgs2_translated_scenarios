section "b04_m5_146"{
    int var0 = Date_GetDateOption(2, 41);
    Background_Bg_GS2("BG_NE270_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "SS_DSE_100_000");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
    Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        Message_MsgSel("That talk was the best!", "That talk was so-so.", "That talk was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_BlinkStart(5, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405146_E00000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I was paying more attention to when\nthey were going to try and scare us.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405146_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Right.\nI was also able to hear your cute\nscream▼");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0405146_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "...\nAre you fine listening to this kinda\nthing?\nI was expecting you to go \"kya!\"\nand \"yah!\"...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0405146_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I know heaps of scarier stories than\nthe one that was told today...");
        Message_MsgSel("W-What kind...?", "Don't say it!", "Ugh, I can't handle any more...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405146_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "...\nWhen you wake up, your homework that\nshould've been done becomes blank,\nagain!\nThat's heaps scary～.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405146_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Wow, that was cute.\nI'll stop, then▼");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 4);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("B0405146_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah. S-Sorry, okay?\nPlease don't cry... Please?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0405146_E00700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "During the talk, you didn't move at\nall.\nWhat's wrong?");
        Message_MsgSel("I got pins and needles.", "It was scary so I slept instead...", "The teller's face is scary...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405146_E00800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "R-Really? ...\nBy the way, what does \"hella sad\"\nmean?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0405146_E00900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Really?\nIf you told me earlier, we could\nhave left...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0405146_E01000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Really?\nIf you told me earlier, we could\nhave left...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah...\nI thought about telling you, but I\njust couldn't.");
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(5, 2, (#1));
                Voice_PlayVoice("B0405146_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", ".........");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Chris＊＊｝?");
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0405146_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It was kinda a waste.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0405146_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "...\nI was paying heaps of attention\nsince I thought you were watching\nit.");
                Character_BlinkStart(5, 2, (#1));
                Voice_PlayVoice("B0405146_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "But you were sleeping...\nI should have slept, too...");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0405146_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Pfft...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Chris＊＊｝ is pouting...\nIt's kind of a rare sight...)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405146_E01600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah, it was heaps scary.\nI wonder why he can move his facial\nmuscles like that?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    }
