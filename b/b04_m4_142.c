section "b04_m4_142"{
    int var0 = Date_GetDateOption(2, 37);
    Background_Bg_GS2("BG_NE230_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "SS_DSE_095_000");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("That live was the best!", "That live was so-so.", "That live was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404142_D00000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Aah, my stomach hurts.\nI laughed so hard! Glad I came.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(4, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404142_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I really had fun. The beat was good.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(4, 3, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0404142_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You say that even though you looked\nlike you liked it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(4, 2, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404142_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Nah, it was a blast!\nTime flies so fast.");
        Message_MsgSel("I got swept with the crowd and I'm tired.", "You laughed so hard, is your throat sore?", "Lives should always be like this!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404142_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "What? That's lame.\nBut I sure had that much fun!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404142_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I'm not that weak.\nI've trained my throat for it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404142_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Oh, you do get it!\nThe feeling of nervousness can be\nmended to influence the audience.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(4, 2, (#1));
        Character_ChFace(0, 3, 5);
        Character_ChFace(0, 4, 1);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404142_D00700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Ahahaha!\nI laughed so hard that I cried!");
        Message_MsgSel("Your live is more tearful, ｛Hariya＊＊｝.", "My diaphram's probably going to hurt tomorrow.", "Yes, here's a handkerchief.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 4, 0);
            Character_BlinkStart(4, 0, (#1), 1);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404142_D00800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "What is that supposed to mean?\nYou don't mean that it's pathetic\nwhen you cry...?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 4, 0);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0404142_D00900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "That's just too pathetic...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0404142_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Yeah. Oh, absolutely!\nSeems you're not physically trained.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Do you train, ｛Hariya＊＊｝?");
                Character_BlinkStart(4, 3, (#1));
                Voice_PlayVoice("B0404142_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Of course!\nIt's the least a vocalist could do.");
                Character_BlinkStart(4, 2, (#1));
                Voice_PlayVoice("B0404142_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "My chest and abdomen muscles are\nquite something, you know?\nI'll show it to you then.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh!? It's fine! It's fine!");
                Character_BlinkStart(4, 0, (#1));
                Voice_PlayVoice("B0404142_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Really?\nWell, tell me if you want to look.");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404142_D01400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Thank you...\nor should I say, you're too blunt...\nI see you don't get that kind of\nfun.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    }
