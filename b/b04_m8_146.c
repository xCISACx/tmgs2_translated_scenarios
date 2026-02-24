section "b04_m8_146"{
    int var0 = Date_GetDateOption(2, 41);
    Background_Bg_GS2("BG_NE270_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "SS_DSE_100_000");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    if (var0 == 0){
        Character_Chara_GS2(8, "M8_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("That talk was the best!", "That talk was so-so.", "That talk was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(8, "M8_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0408146_H00000", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Just as I thought, Inamura Jouji is\nthe best!\nI've gotten the chills!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(8, 2, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0408146_H00100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "That was just so-so?\nI wonder how well you can tolerate\nscary stuff...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0408146_H00200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "I thought it was very fun and\nscary...\nWell, I didn't believe it all,\nthough.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(8, "M8_??F", 0, 1, 0);
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0408146_H00300", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Hey, do you know when this talk is\nover, something bizarre always\nhappens.");
        Message_MsgSel("You mean that cling film phenomenon!?", "I won't be able to sleep alone tonight...", "I don't believe that.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(8, "M8_??F", 0, 1, 1);
            Character_BlinkStart(8, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0408146_H00400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Maybe. But it was unusual.\nI was expecting something more\nflashy...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(8, "M8_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(8, 2, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0408146_H00600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Ah, no, I was joking!\nHey, don't cry!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_BlinkStart(8, 2, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0408146_H00700", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "What a boring one...\nAs a girl, why don't you act scared,\neven if it's a lie?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(8, "M8_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0408146_H00800", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "... Are you shivering?");
        Message_MsgSel("Let's go home already...", "I...I'm trembling from excitement!", "It's gotten c-c-c-colder...");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(8, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0408146_H00900", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "... Eh, you serious?\nBut we're at the good part?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0408146_H01000", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "... Eh, you serious?\nBut we're at the good part?\nAre you that scared?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yes...");
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0408146_H01100", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Then that's my bad. Let's go...");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0408146_H01200", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "But did your family say that they'd\nbe getting home late today?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh!");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(8, 2, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0408146_H01300", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Are you okay?");
                Character_ChFace(0, 0, 6);
                Character_BlinkStart(8, 2, (#1));
                Voice_PlayVoice("B0408146_H01400", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Then...\nDo you wanna rest at my place?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ehh!");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0408146_H01500", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "K-Kidding! Hahaha!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ah, that was a surprise...)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(8, "M8_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(8, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Character_ChFace(1, 7, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0408146_H01600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Hahaha.\nYou're still fine if you can bluff\nlike that.\nAlright.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(8, "M8_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0408146_H01700", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Ohh!\nCould it be that you can sense those\nthings?\nWhat feeling does it have?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    }
