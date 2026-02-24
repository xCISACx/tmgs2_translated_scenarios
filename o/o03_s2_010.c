section "o03_s2_010"{
    Message_Who(0);
    Message_MsgDisp("主人公", "I need a partner. I'm stumped...");
    Character_Chara_GS2(15, "S2_01F", 0);
    Voice_PlayVoice("O0315010_O00000", #1, "");
    Message_Who(15);
    Message_MsgDisp("Hanatsubaki", "Daisy?\nYou must not make such a face.\nI am here▼");
    Message_Who(0);
    Message_MsgDisp("主人公", "Ah, Himeko-senpai.");
    Voice_PlayVoice("O0315010_O00100", #1, "");
    Message_Who(15);
    Message_MsgDisp("Hanatsubaki", "A three-legged race?\nHimeko will leave-it-to-you.\nI'll run with you. So, it's okay～!");
    Message_Who(0);
    Message_MsgDisp("主人公", "Thank you! Himeko-senpai!");
    Voice_PlayVoice("O0315010_O00200", #1, "");
    Message_Who(15);
    Message_MsgDisp("Hanatsubaki", "Come now, help me change into my\nclothes, please!");
    Message_CloseMsg();
    Character_Chara_GS2(15, "NON");
    }
