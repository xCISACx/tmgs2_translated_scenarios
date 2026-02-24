section "b04_m5_145"{
    int var0 = Date_GetDateOption(2, 40);
    Background_Bg_GS2("BG_NE260_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MS_L_NE_240_S00");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
    Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        Message_MsgSel("That live was the best!", "That live was so-so.", "That live was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405145_E00000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I don't know why, but they screamed\na lot～!\nI feel refreshed!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405145_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nActually, I was more interested in\nthe make-up than the songs.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0405145_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "So only I was enjoying it... Sorry.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0405145_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "That performance was amazing...");
        Message_MsgSel("That vocalist was intoxicated.", "Cleaning up afterwards would be tough.", "It was pretty like snow.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405145_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah...\nA performance with white feathers\nfluttering...\nIf you were going to hold such a\nshow, you would be intoxicated.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0405145_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Even so, there's nothing you can do\nabout it...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405145_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nIt really looked like a painting.\nIt was amazing.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0405145_E00700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hey, don't you think that the doll\nstyle make-up would suit me?");
        Message_MsgSel("Only if you act like a doll and be quiet...", "I'll do that for you next time.", "I think you're more suited to kabuki.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0405145_E00800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Eh～... Is it bad for dolls to speak?\nOr is it bad for me to speak?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0405145_E00900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "...\nMeaning that only my appearance is\nlike a doll?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, the appearance.\nPeoples' impression about you change\nwhen you talk,\n｛Chris＊＊｝.");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405145_E01000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "But the difference in my appearance\nand the way I speak is lovable,\nright?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, that's right.");
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 1);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0405145_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "......");
                Message_Who(0);
                Message_MsgDisp("主人公", "What's wrong?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0405145_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... This is bad～.\nYou're using foul play.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ehh?");
                Character_BlinkStart(5, 0, (#1));
                Voice_PlayVoice("B0405145_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I want to ban it, but I don't hate\nit either...");
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("B0405145_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... I'm the one who is in love...\n*Sigh*");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I wonder why ｛Chris＊＊｝\nis sighing?)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405145_E01500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Okay. I look forward to it～.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405145_E01600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Special kabuki make-up?\nSpecial kabuki make-up, right?\nI really wanna try that!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    }
