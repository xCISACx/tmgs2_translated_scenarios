section "b04_m1_071"{
    int var0 = Date_GetDateOption(2, 18);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(1, 3, (#1));
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_FP210_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401071_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "... Argh～. It's hot!!");
        Message_MsgSel("The water surface is shining like a gem!", "I want to shower under the fountain.", "I hate the heat, and days like these...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401071_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You can tolerate the heat quite\nwell...\nI admire you.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401071_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ah, me too! Hey, go and try it out!\nI wonder if people will get angry at\nus.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0401071_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Then why are we even here...?\nI should have worked instead, it's\ncool there.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_FP210_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401071_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Hey, you...\nDo you know how they build\nfountains?");
        Message_MsgSel("I have never thought about it!", "Umm, they uhh, take underground water...", "The water was originally like that.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401071_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Think about it.\nAh, but I don't know the answer\neither.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401071_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ahaha! Don't act like you know!\nAh, but I actually don't know\neither.");
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
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401071_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ehh...\nAre you obsessed over fountains?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_FP210_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401071_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ah, there's a fish!");
        Message_MsgSel("Wow... It's quite big.", "Let's go fishing!?", "I want to release it into the vast ocean!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401071_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "It's kinda got this \"King of the\npond\" feeling.\nIt's making a self-important face.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401071_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "No thank you. Bye bye.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0401071_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "It's a freshwater fish, isn't it?\nNo matter how you think about...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0401071_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "If you were going to, wouldn't you\nrelease it into a pond or river?\nNo matter how you look at it, it's a\nfreshwater fish.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, is that so.");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0401071_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "...\nI wonder which one this guy prefers.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Voice_PlayVoice("B0401071_A01400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "In this trapped world, he can live\nwithout having to worry about\ngetting food.");
                Voice_PlayVoice("B0401071_A01500", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Even if it's rough, he should live\nwhere he wants to live.");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0401071_A01600", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... Or something like that.\nForget what I said!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Saeki＊＊｝...?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Environment_StopME(1, 40);
    System_Wait(60);
    }
