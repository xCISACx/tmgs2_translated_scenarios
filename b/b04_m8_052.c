section "b04_m8_052"{
    if (System_GlobalWork(1, 1) == 0){
        Character_Chara_GS2(8, "M8_D?F", 0, 1, 0);
        Character_ChFace(0, 2, 5);
        Character_BlinkStart(8, 2, (#1));
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_WF521_LI_2", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0408052_H00000", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "How pretty...");
        Message_MsgSel("The night sky is the fireworks' canvas!", "What are inside of the fireworks?", "It's loud.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(8, "M8_D?F", 0, 1, 1, 33);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0408052_H00100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Yeah, it's the flower of Summer.\nIf you don't see this, you can't say\nyou enjoyed Summer.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(8, "M8_D?F", 0, 1, 1, 33);
            Character_BlinkStart(8, 0, (#1), 2);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0408052_H00200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "It's good that you're interested in\nthat.\nIf you research it when you get\nhome, you'll get a silver star!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0408052_H00300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "You...\nYou're just like a typical young\nperson these days.\nNo emotion at all...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (System_GlobalWork(1, 1) == 1){
        Character_Chara_GS2(8, "M8_D?F", 0, 1, 0);
        Background_Bg_GS2("BG_WF521_LI_2", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0408052_H00400", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "When I was younger, I got burned\nwhen I was lighting fireworks.\nWhat about you?");
        Message_MsgSel("... I didn't get burned or anything.", "I actually didn't just get burned...", "So you were a brat.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0408052_H00500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Whoa, you shouldn't be glaring at\nyour senior like that...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(8, "M8_D?F", 0, 1, 1, 33);
            Character_ChFace(1, 2, 4);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0408052_H00600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Oh, I got a bad feeling about this!!\nCome on, spill it!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(8, "M8_D?F", 0, 1, 1, 33);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0408052_H00700", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Yeah～.\nApparently I was quite a pain to my\nfamily when I was a kid.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else {
        Character_Chara_GS2(8, "M8_D?F", 0, 1, 0);
        Character_ChFace(0, 2, 5);
        Character_BlinkStart(8, 2, (#1));
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_WF521_LI_2", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0408052_H00800", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "This signals the end of Summer...");
        Message_MsgSel("Are you lost in deep thoughts?", "There is still time before it's over!", "My h-homework...!");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(8, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_BlinkStart(8, 0, (#1));
                Character_ChFace(0, 2, 1);
                Voice_PlayVoice("B0408052_H00900", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "...\nYou're making a \"that doesn't suit\nyou\" face...\nWell, it doesn't...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_BlinkStart(8, 0, (#1));
                Character_ChFace(0, 3, 2);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0408052_H01000", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Hmm... a little.\nIt doesn't sound like me, though.");
                Character_ChFace(0, 4, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0408052_H01100", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "I wonder if we'll be able to come\nand watch it again next year.");
                Character_BlinkStart(8, 2, (#1));
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0408052_H01200", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "One year...\nis enough time for a person to\nchange.");
                Character_BlinkStart(8, 3, (#1));
                Voice_PlayVoice("B0408052_H01300", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Especially for people your age.\nTime will go by in the blink of an\neye and so will your maturity...");
                Message_Who(0);
                Message_MsgDisp("主人公", "... ｛Masaki＊＊｝?");
                Character_BlinkStart(8, 2, (#1));
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0408052_H01400", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "...\nThere isn't one thing that I can be\nsure that won't change...\nWanna come again next year?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yes.");
                Character_ChFace(0, 4, 0);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0408052_H01500", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "...\nThat immediate reply means that\nyou've got no idea.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0408052_H01600", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Whatever...\nThat's what's good about you.\nNow, let's go!");
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(8, "M8_D?F", 0, 1, 1, 33);
            Character_BlinkStart(8, 0, (#1), 2);
            Character_ChFace(1, 2, 4);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0408052_H01700", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Oh, what's that you say?\nYou're right, it's still to early to\nbe doing this!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(8, "M8_D?F", 0, 1, 1, 33);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0408052_H01800", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "High school students have got it\ntough～.\nWell, it's not a bad thing to do it,\nso do your best.");
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
