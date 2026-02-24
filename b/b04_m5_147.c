section "b04_m5_147"{
    int var0 = Date_GetDateOption(2, 42);
    Background_Bg_GS2("BG_NE280_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MS_L_30_P63_S00");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    if (var0 == 0){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("That live was the best!", "That live was so-so.", "That live was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405147_E00000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You also like jazz?\nI'm glad, for some reason.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_BlinkStart(5, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405147_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nThere was a nice atmosphere, too.");
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
            Voice_PlayVoice("B0405147_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Really... That's too bad...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 3, 4);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405147_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "... Huh, it's over? Since when?");
        Character_ChFace(0, 7, 0);
        Message_MsgSel("... Good morning.", "The performers were glaring at you.", "Are you bored when you're with me?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405147_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Good morning.\nThe rhythm was so good I just fell\nasleep.\nHaha.");
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
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405147_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "But it's not like I was sleeping\nbecause I was bored...\nI'll reflect on my behaviour...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(5, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0405147_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "W-Why do you think that?\nJust drop it, because I feel like my\nheart is gonna jump out of me...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_BlinkStart(5, 3, (#1));
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405147_E00700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "When I listen to jazz, it makes me\nmore impulsive...");
        Message_MsgSel("We'll go do something extreme, then!", "Does it bring back bad memories?", "Maybe because we can't ride the rhythm?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_BlinkStart(5, 0, (#1), 2);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405147_E00800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Alright, we will! ...\nI wonder what we should do.");
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
                Character_BlinkStart(5, 0, (#1), 1);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0405147_E00900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "No, not that kind of\nimpulsiveness...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0405147_E01000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Uh.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh... did I guess correctly?");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0405147_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Hmm. Close.");
                Character_BlinkStart(5, 2, (#1));
                Voice_PlayVoice("B0405147_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "At first, I listened to jazz because\nit was a part of my education,\ndespite going against my intentions.");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("B0405147_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "That's why I hated it at first...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Is that so...");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0405147_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Even though I hated it so much, I\nbegan listening to it, as I had\npersonally liked it.\nPeople are so mysterious.");
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("B0405147_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Ah, if you happen to get really\ninterested in it, tell me, because\nI'll lend you CDs.\nHeaps of them.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Sure, thanks.");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405147_E01600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah, maybe.\nPeople often say that everyone feels\nthe rhythm differently.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    }
